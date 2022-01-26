//
// Created by grousses on 06/01/2022.
//
#include <string>
#include <iostream>
#include <thread>
#include "AllegroManager.h"

using namespace std;

/*
 * Constructeur initialisant la taille de la fenêtre et le nombre d'entités,
 * elle appelle ensuite la fonction d'initialisation des erreurs pour Allegro
 * et enfin la mainloop pour lancer le programme.
 */
AllegroManager::AllegroManager(int width, int height, int nbEntities):
width {width},
height {height},
nombreEntities {nbEntities}
{
    init();
    mainloop();
}

AllegroManager::~AllegroManager() {
    al_destroy_display(gDisplay);
    al_shutdown_primitives_addon();
}

void AllegroManager::mainloop() {

    // Initialisation des entités.
    entitiesManager.init(nombreEntities, width, height);

    /*
     * Boucle principale du programme.
     */
    while (true){

        // Récupération des évenements clavier
        // si on clique sur Esc, on ferme le programme.
        al_get_keyboard_state(&gKbdstate);
        if (al_key_down(&gKbdstate, ALLEGRO_KEY_ESCAPE))
            break;

        // On efface tout (dans le backbuffer)
        al_clear_to_color(al_map_rgb(250,250,250));

        // Vérifie si une entité n'est pas sortie de la fenêtre. Le cas échéant elle est repositionnée au milieu.
        entitiesManager.checkPosition(width, height);

        // Appel de la fonction de mise à jour des Entities.
        entitiesManager.draw();

        // On affiche le backbuffer.
        al_flip_display();

        this_thread::sleep_for(std::chrono::milliseconds(10));

    }
}

    /*
     *  Méthode d'initialisation de la librairie ALlegro
     *  elle gère les différentes erreurs.
     */

    void AllegroManager::init(){

        if(!al_init()) {
            crashOnError("failed to initialize allegro!");
        }
        if(!al_init_primitives_addon()) {
            crashOnError("failed to initialize allegro primitives addon!");
        }

        al_set_new_display_flags(ALLEGRO_OPENGL_3_0);

        gDisplay = al_create_display(width, height);

        if(!gDisplay) {
            crashOnError("failed to initialize allegro display!");
        }
        if(!al_install_keyboard()) {
            crashOnError("Failed to initialize allegro keyboard handling!");
        }
        if(!al_install_mouse()) {
            crashOnError("Failed to initialize allegro mouse handling!");
        }

    }

    /*
     * Fonction affichant les messages d'erreurs de la fonction init.
     */
    void AllegroManager::crashOnError(string message) {
        cerr << message << endl;
        exit(-1);

    }


