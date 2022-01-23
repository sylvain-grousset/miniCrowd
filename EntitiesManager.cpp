//
// Created by grousses on 07/01/2022.
//

#include <cstdlib>
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
    for (auto e: entity1) {
        e.draw();
    }
}

void EntitiesManager::moove() {
    for (auto &e: entity1){
        e.changeMoove();
        e.moove();
    }
}

void EntitiesManager::changeMoove() {
    for (auto &e: entity1){
        e.changeMoove();
    }

}
