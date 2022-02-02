//
// Created by grousses on 28/01/2022.
//

#ifndef MINICROWD_RECTANGLE_H
#define MINICROWD_RECTANGLE_H


#include "Entity.h"

class Rectangle : public Entity{
public:

    Rectangle(double positionX, double positionY, double velociteX, double velociteY, ALLEGRO_COLOR color, int size);

    void changePosition() override;
    void moove() override;
    void draw() override;


};


#endif //MINICROWD_RECTANGLE_H
