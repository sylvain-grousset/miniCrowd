//
// Created by grousses on 07/01/2022.
//

#include <cstdlib>
#include <iostream>
#include <allegro5/color.h>
#include "EntitiesManager.h"
#include "Rectangle.h"
#include "Amie.h"

EntitiesManager::EntitiesManager() {

}

/*
 * Ajoute une entité à la fin du vector d'entité entity1.
 */
//void EntitiesManager::add(Entity a) {
//    entity1.push_back(&a);
//}

/*
 * Initialise le nombre d'entités entré par l'utilisateur.
 * Crée chaque entité avec des valeurs aléatoires (position, vélocité, taille, couleur) et ajoute chaque entité au vector d'entité.
 */
void EntitiesManager::init(int nbEntities, int width, int height) {
    srand(42);
    for (int i = 0; i < nbEntities; ++i) {
        //Entity entity (rand()%width, rand()%height, 4*(rand()/RAND_MAX)-2, 4*(rand()/RAND_MAX)-2, 1+(rand()%255), 1+(rand()%255), 1+(rand()%255), 1+(rand()%10));

        double coinHautGauche = rand() % height;
        double coinBasDroite = rand() % width;

        ALLEGRO_COLOR color (al_map_rgba(1+(rand()%255),1+(rand()%255), 1+(rand()%255), 200));
        //ALLEGRO_COLOR color (al_map_rgba(0,255, 0, 200));

        //Rectangle* rectangle = new Rectangle(coinHautGauche, coinBasDroite, 4*(rand()/RAND_MAX)-2, 4*(rand()/RAND_MAX)-2, color, 1+(rand()%10));
        Entity* entity = new Entity(rand()%width, rand()%height, 4*(rand()/RAND_MAX)-2, 4*(rand()/RAND_MAX)-2, color, 5+(rand()%10));

        Amie* amie = new Amie(rand()%width, rand()%height, 4*(rand()/RAND_MAX)-2, 4*(rand()/RAND_MAX)-2, color, 5+(rand()%10), entity);

        if(i & 1){//entity1.push_back(rectangle); // si i est impair, on dessine un rectangle
        }else{
            entity1.push_back(entity);
        entity1.push_back(amie);}       // Sinon si i est pair, on dessine une ellipse.

        //add(rectangle);
    }

}

/*
 * Fonction parcourant le vector d'entité et pour chaque entité la met à jour avec les 3 fonctions de mise à jour.
 */
void EntitiesManager::draw() {
    for (auto &e: entity1) {
        e->draw();
        e->moove();
        e->changePosition();
    }
}

/*
 * Fonction qui permet de remettre une entitée au centre de l'écran lorsqu'elle dépasse de la fenêtre.
 * J'utilise les getter des attributs px et py pour vérifier si l'entité est encore dans la fenêtre.
 * Lorsqu'elle n'est plus dans la fenêtre, j'utilise les setters de px et py pour la re mettre au centre de l'écran.
 */
void EntitiesManager::checkPosition(int width, int height) {
    for (auto &e: entity1){
        if (e->getPx() > width || e->getPy() > height || e->getPx() < 0 || e->getPy() < 0){
            e->setPx(width/2);
            e->setPy(height/2);

            //cout << "Une a dépassé la taille de la fenêtre !";
        }
    }
}
