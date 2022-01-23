//
// Created by grousses on 07/01/2022.
//

#include "Entity.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

using namespace std;
Entity::Entity(double positionX, double positionY, double velociteX, double velociteY, int red, int green, int blue, int taille):
px {positionX},
py {positionY},
vx {velociteX},
vy {velociteY},
red {red},
green {green},
blue {blue},
taille {taille},
gStep {0}
{

}


void Entity::draw() {
    al_draw_filled_ellipse(px, py, taille, taille, al_map_rgba(red, green, blue, 200) );
}

void Entity::moove() {
    px += vx;
    py += vy;
}

void Entity::changePosition() {
    if (gStep%20 == 0){
        vx = 4*(rand()/ static_cast<double>(RAND_MAX)) - 2;
        vy = 4*(rand()/ static_cast<double>(RAND_MAX)) - 2;
    }
    gStep++;
}

double Entity::getPx() const {
    return px;
}

void Entity::setPx(double px) {
    Entity::px = px;
}

double Entity::getPy() const {
    return py;
}

void Entity::setPy(double py) {
    Entity::py = py;
}
