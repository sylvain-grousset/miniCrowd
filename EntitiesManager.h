//
// Created by grousses on 07/01/2022.
//

#ifndef MINICROWD_ENTITIESMANAGER_H
#define MINICROWD_ENTITIESMANAGER_H
#include "Entity.h"

class EntitiesManager {

public:
    EntitiesManager();

    void init(int nbEntities, int width, int height); // Initialise les entités.
    void draw();                                      // Met à jour les entités graphiquement.


        // Fonction de rebond pas encore implémentée. Pas le temps de la terminer.
    //void checkPosition(int width, int height);

private:
    vector<Entity> entity1;     // Contient la liste de toutes les entités.
    void add(Entity a);         //Ajout d'une entité dans le vector d'entités entity1. Je passe par une fonction pour ajouter une Entity au vector parce que j'ai l'habitude de faire comme ça.
};


#endif //MINICROWD_ENTITIESMANAGER_H
