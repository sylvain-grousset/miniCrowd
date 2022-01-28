//
// Created by grousses on 28/01/2022.
//

#include "Rectangle.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

Rectangle::Rectangle(double positionX, double positionY, double velociteX, double velociteY, int red, int green,
                     int blue, int size) : Entity(positionX, positionY, velociteX, velociteY, red, green, blue, size)  {
draw();
}

void Rectangle::draw() {
    al_draw_filled_rectangle(px, py, taille, taille, al_map_rgba(red, green, blue, 200));
}