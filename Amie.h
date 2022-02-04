//
// Created by grousses on 02/02/2022.
//

#ifndef MINICROWD_AMIE_H
#define MINICROWD_AMIE_H


#include "Entity.h"

class Amie : public Entity{

public:

    void draw() override;
    void moove() override;
    void changePosition() override;

    Amie(double positionX, double positionY, double velociteX, double velociteY, ALLEGRO_COLOR color, int size, Entity* entity);

private:
    Entity* entity;
};


#endif //MINICROWD_AMIE_H
