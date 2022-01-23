//
// Created by grousses on 07/01/2022.
//

#ifndef MINICROWD_ENTITY_H
#define MINICROWD_ENTITY_H
#include <vector>
using namespace std;
class Entity {

public:
    Entity(double positionX, double positionY, double velociteX, double velociteY, int red, int green, int blue, int size);

    void draw();
    void moove();
    void changePosition();

    double getPx() const;
    void setPx(double px);
    double getPy() const;
    void setPy(double py);

private:
    double px;
    double py;
    double vx;
    double vy;
    int red, green, blue;
    int taille;
    unsigned int gStep;
};



#endif //MINICROWD_ENTITY_H
