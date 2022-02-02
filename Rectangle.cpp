//
// Created by grousses on 28/01/2022.
//

#include "Rectangle.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

Rectangle::Rectangle(double positionX, double positionY, double velociteX, double velociteY, ALLEGRO_COLOR color,
                     int size) : Entity(positionX, positionY, velociteX, velociteY, color, size){

    draw();
}

void Rectangle::draw() {

    al_draw_filled_rectangle(px, py, px+taille, py+taille, color);
}

void Rectangle::moove() {
    px += vx;
    py += vy;
}

void Rectangle::changePosition() {
    if (gStep%20 == 0){
        vx = rand()/ static_cast<double>(RAND_MAX) - 0.5;
        vy = rand()/ static_cast<double>(RAND_MAX) - 0.5;
    }
    gStep++;
}
