//
// Created by grousses on 06/01/2022.
//
#include <string>
#include <iostream>
#include <vector>
#include <thread>
#include "AllegroManager.h"
#include "Entity.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <search.h>

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
    // Horrible facon de representer les positions des individus
    vector<vector<double>> entities;
    vector<vector<double>> velocities;

    entitiesManager.init(nombreEntities, width, height);

    // Boucle principale
    while (true){
        // Récupération des évenements clavier
        al_get_keyboard_state(&gKbdstate);

        // Sortie si Esc.
        if (al_key_down(&gKbdstate, ALLEGRO_KEY_ESCAPE))
            break;

        // Comportement des individus
//        int i = 0;
//        for (auto& e: entities){
//            e[0] += velocities[i][0];
//            e[1] += velocities[i][1];
//            ++i;
//        }

        // Sometimes, change entities velocity
//                if (gStep%20 == 0){
//                    // Change entities velocity
//                    for (auto& v: velocities){
//                        v[0] = 4*(rand()/ static_cast<double>(RAND_MAX)) - 2;
//                        v[1] = 4*(rand()/ static_cast<double>(RAND_MAX)) - 2;
//                    }
//                }

        // On efface tout (dans le backbuffer)
        al_clear_to_color(al_map_rgb(250,250,250));

        // Dessin des individus (dans le backbuffer)
//        for (const auto& e: entities){
//            al_draw_filled_ellipse(e[0], e[1], 4, 4, al_map_rgba(10, 20, 100, 200) );
//        }
        entitiesManager.draw();
        entitiesManager.changeMoove();
        entitiesManager.moove();
        // On affiche le backbuffer
        al_flip_display();

        this_thread::sleep_for(std::chrono::milliseconds(10));

        gStep++;

    }
}
    void AllegroManager::init() <{

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


