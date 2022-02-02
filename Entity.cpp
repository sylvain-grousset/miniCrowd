//
// Created by grousses on 07/01/2022.
//

#include "Entity.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

using namespace std;

/*
 * Initialise les attributs pour chaque entités.
 */
Entity::Entity(double positionX, double positionY, double velociteX, double velociteY, ALLEGRO_COLOR color, int taille):
px {positionX},
py {positionY},
vx {velociteX},
vy {velociteY},
color {color},
taille {taille},
gStep {0}
{

}

/*
 * Dessine une entité avec ses attributs.
 */
void Entity::draw() {
    al_draw_filled_ellipse(px, py, taille, taille, color);
}

/*
 * Bouge une entité en lui ajoutant sa vélocité générée aléatoirement.
 *
 */
void Entity::moove() {
    px += vx;
    py += vy;
}

/*
 * A chaque fois que la variable gStep a fait 20 cycles (le temps de voir les entités bouger un petit peut)
 * on ré affecte aux vélocités une nouvelle valeur.
 * Puis lorsque gStep a encore fait 20 cycles, on ré affecte à nouveau aux vélocités une nouvelle valeur et
 * ce jusqu'à la fins ud programme ...
 */
void Entity::changePosition() {
    if (gStep%20 == 0){
        vx = rand()/ static_cast<double>(RAND_MAX) - 0.5;
        vy = rand()/ static_cast<double>(RAND_MAX) - 0.5;
    }
    gStep++;
}

//                        GETTER & SETTER
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
