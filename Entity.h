//
// Created by grousses on 07/01/2022.
//

#ifndef MINICROWD_ENTITY_H
#define MINICROWD_ENTITY_H
#include <vector>
using namespace std;
class Entity {

public:
    Entity(double positionX, double positionY, double velociteX, double velociteY, int r, int g, int b);

    void draw();
    void moove();

    void changeMoove();

    int getGStep() const;
    void setGStep(int gStep);

private:
    double px;
    double py;

    double vx;
    double vy;

    int gStep;

    int r;
    int g;
    int b;
    int a;
};


#endif //MINICROWD_ENTITY_H
