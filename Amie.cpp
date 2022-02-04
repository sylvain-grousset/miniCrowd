//
// Created by grousses on 02/02/2022.
//

#include "Amie.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <iostream>

Amie::Amie(double positionX, double positionY, double velociteX, double velociteY, ALLEGRO_COLOR color, int size, Entity* entity) : Entity(positionX, positionY, velociteX, velociteY, color, size) {
    draw();
    this->entity = entity;
    gStep = 0;
}

void Amie::draw() {
    ALLEGRO_COLOR color1(al_map_rgba(5,5,5,200));
    al_draw_filled_ellipse(px, py, taille, taille, color);
}

void Amie::changePosition() {
//    if (gStep%20 == 0){
//        vx = rand()/ static_cast<double>(RAND_MAX) - 0.5;
//        vy = rand()/ static_cast<double>(RAND_MAX) - 0.5;
//    }
//    gStep++;
}

void Amie::moove() {
    px += (entity->getPx() - px)*0.01;
    py += (entity->getPy() - py)*0.01;
    color = entity->getColor();
    if(taille > entity->getTaille()){
        taille = 10+(rand()%20);
        while (taille>entity->getTaille()){
            taille = 10+(rand()%20);
        }
    }

}