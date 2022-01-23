 #include <iostream>
#include <vector>
#include <thread>

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "AllegroManager.h"


 using namespace std;

void crashOnError(std::string message);

//ALLEGRO_KEYBOARD_STATE gKbdstate;
//
//ALLEGRO_DISPLAY* gDisplay = nullptr;
//
//int gWidth = 1024;
//int gHeight = 1024;

int gNbEntities = 2141;
unsigned int gStep = 0;

int gVx = 1;
int gVy = 1;

int main() {
    AllegroManager allegro(1080, 1080, 1000);

//    if(!al_init()) {
//        crashOnError("failed to initialize allegro!");
//    }
//
//    if(!al_init_primitives_addon()) {
//        crashOnError("failed to initialize allegro primitives addon!");
//    }
//
//    al_set_new_display_flags(ALLEGRO_OPENGL_3_0);
//
//    gDisplay = al_create_display(gWidth, gHeight);
//
//    if(!gDisplay) {
//        crashOnError("failed to initialize allegro display!");
//    }
//
//    if(!al_install_keyboard()) {
//        crashOnError("Failed to initialize allegro keyboard handling!");
//    }
//
//    if(!al_install_mouse()) {
//        crashOnError("Failed to initialize allegro mouse handling!");
//    }

    // Horrible facon de representer les positions des individus
//    std::vector<std::vector<double>> entities;
//    std::vector<std::vector<double>> velocities;
//
//    // Initialisation des positions
//    srand(42);
//    for (int i = 0; i < gNbEntities; ++i) {
//        int x = rand() % gWidth;
//        int y = rand() % gHeight;
//        entities.push_back({static_cast<double>(x), static_cast<double>(y)});
//        double vx = 4*(rand()/RAND_MAX) - 2;
//        double vy = 4*(rand()/RAND_MAX) - 2;
//        velocities.push_back({vx, vy});
//    }
//
//    // Boucle principale
//    while (true){
//        // Récupération des évenements clavier
//        al_get_keyboard_state(&gKbdstate);
//
//        // Sortie si Esc.
//        if (al_key_down(&gKbdstate, ALLEGRO_KEY_ESCAPE))
//            break;
//
//        // Comportement des individus
//        int i = 0;
//        for (auto& e: entities){
//            e[0] += velocities[i][0];
//            e[1] += velocities[i][1];
//            ++i;
//        }
//
//        // Sometimes, change entities velocity
//        if (gStep%20 == 0){
//            // Change entities velocity
//            for (auto& v: velocities){
//                v[0] = 4*(rand()/ static_cast<double>(RAND_MAX)) - 2;
//                v[1] = 4*(rand()/ static_cast<double>(RAND_MAX)) - 2;
//            }
//        }
//
//        // On efface tout (dans le backbuffer)
//        al_clear_to_color(al_map_rgb(250,250,250));
//
//        // Dessin des individus (dans le backbuffer)
//        for (const auto& e: entities){
//            al_draw_filled_ellipse(e[0], e[1], 4, 4, al_map_rgba(10, 20, 100, 150) );
//        }
//
//        // On affiche le backbuffer
//        al_flip_display();
//
//        this_thread::sleep_for(std::chrono::milliseconds(1));
//
//        gStep++;
//    }
//
//    return 0;
//}

//void crashOnError(std::string message) {
//    cerr << message << endl;
//    exit(-1);
//}

}
