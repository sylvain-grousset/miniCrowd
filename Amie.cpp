//
// Created by grousses on 02/02/2022.
//

#include "Amie.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

Amie::Amie(double positionX, double positionY, double velociteX, double velociteY, ALLEGRO_COLOR color, int size) : Entity(positionX, positionY, velociteX, velociteY, color, size) {
    draw();
}

void Amie::draw() {
    ALLEGRO_COLOR color1(al_map_rgba(5,5,5,200));
    al_draw_filled_ellipse(px, py, vx, vy, color1);
}