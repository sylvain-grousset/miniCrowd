//
// Created by grousses on 07/01/2022.
//

#include <cstdlib>
#include <iostream>
#include "EntitiesManager.h"

EntitiesManager::EntitiesManager() {

}

void EntitiesManager::add(Entity a) {
    entity1.push_back(a);
}

void EntitiesManager::init(int nbEntities, int width, int height) {
    srand(42);
    for (int i = 0; i < nbEntities; ++i) {
        Entity entity (rand()%width, rand()%height, 4*(rand()/RAND_MAX)-2, 4*(rand()/RAND_MAX)-2, 1+(rand()%255), 1+(rand()%255), 1+(rand()%255), 1+(rand()%10));
        add(entity);
    }

}

void EntitiesManager::draw() {
    for (auto &e: entity1) {
        e.draw();
        e.moove();
        e.changePosition();
    }
}

//void EntitiesManager::checkPosition(int width, int height) {
//    for (auto &e: entity1){
//        if (e.getPx() > width || e.getPy() > height || e.getPx() < 0 || e.getPy() < 0){
//            cout << "Une a dépassé la taille de la fenêtre !";
//        }
//    }
//}
