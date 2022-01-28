//
// Created by grousses on 28/01/2022.
//

#ifndef MINICROWD_RECTANGLE_H
#define MINICROWD_RECTANGLE_H


#include "Entity.h"

class Rectangle : public Entity{
public:
    Rectangle(double positionX, double positionY, double velociteX, double velociteY, int red, int green,
              int blue, int size);

    void draw() override;
};


#endif //MINICROWD_RECTANGLE_H
