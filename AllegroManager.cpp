//
// Created by grousses on 06/01/2022.
//
#include <string>
#include <iostream>
#include <vector>
#include <thread>
#include "AllegroManager.h"

using namespace std;
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

    // Boucle principale
    while (true){

        // Récupération des évenements clavier
        al_get_keyboard_state(&gKbdstate);

        // Sortie si Esc.
        if (al_key_down(&gKbdstate, ALLEGRO_KEY_ESCAPE))
            break;

        // On efface tout (dans le backbuffer)
        al_clear_to_color(al_map_rgb(250,250,250));

        // On dessine chaque entités, puis on lui change sa position et on la fait bouger.
        entitiesManager.draw();
        entitiesManager.changePosition();
        entitiesManager.moove();

        // On affiche le backbuffer
        al_flip_display();

        this_thread::sleep_for(std::chrono::milliseconds(10));

    }
}
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

    void AllegroManager::crashOnError(string message) {
        cerr << message << endl;
        exit(-1);

    }


