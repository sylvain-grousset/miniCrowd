//
// Created by grousses on 07/01/2022.
//

#ifndef MINICROWD_ENTITIESMANAGER_H
#define MINICROWD_ENTITIESMANAGER_H


#include "Entity.h"

class EntitiesManager {

public:
    EntitiesManager();
    void init(int nbEntities, int width, int height);

    void draw();
    void moove();

    void changeMoove();

private:
    vector<Entity> entity1;      //Liste des entités.
    void add(Entity a);         //Ajout d'une entité dans le vector. Je passe par une fonction pour ajouter une Entity au vector parce que j'ai l'habitude de faire comme ça.
};


#endif //MINICROWD_ENTITIESMANAGER_H
