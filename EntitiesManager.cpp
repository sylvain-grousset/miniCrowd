//
// Created by grousses on 07/01/2022.
//

#include <cstdlib>
#include <iostream>
#include "EntitiesManager.h"
#include "Rectangle.h"

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

        double coinHautGauche = 1+(rand()%50);
        double coinBasDroite = 1+(rand()%50);
        Rectangle* rectangle = new Rectangle(coinHautGauche, coinHautGauche, coinHautGauche+20, coinHautGauche+20, 1+(rand()%255), 1+(rand()%255), 1+(rand()%255), 1+(rand()%10));
        Entity* entity = new Entity(rand()%width, rand()%height, 4*(rand()/RAND_MAX)-2, 4*(rand()/RAND_MAX)-2, 1+(rand()%255), 1+(rand()%255), 1+(rand()%255), 1+(rand()%10));

        entity1.push_back(entity);
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
