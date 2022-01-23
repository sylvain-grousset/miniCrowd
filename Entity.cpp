//
// Created by grousses on 07/01/2022.
//

#include "Entity.h"
#include <vector>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

using namespace std;
Entity::Entity(double positionX, double positionY, double velociteX, double velociteY, int red, int green, int blue):
px {positionX},
py {positionY},
vx {velociteX},
vy {velociteY},
r {red},
g {green},
b {blue}
{

}


void Entity::draw() {
    al_draw_filled_ellipse(px, py, 4, 4, al_map_rgba(r, g, b, 200) );
}

void Entity::moove() {
    px += vx;
    py += vy;
}

void Entity::changeMoove() {
    if (gStep%20 == 0){
        vx = 2*(rand()/RAND_MAX)-2;
        vy = 2*(rand()/RAND_MAX)-2;
        // Change entities velocity
    }
    gStep++;
}

int Entity::getGStep() const {
    return gStep;
}

void Entity::setGStep(int gStep) {
    Entity::gStep = gStep;
}

