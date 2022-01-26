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

    void draw();            // Dessine une entité avec la fonction al_draw_filled_ellipse()
    void moove();           // Bouge une entité en lui ajoutant sa vélocité générée aléatoirement.
    void changePosition();  // Redéfinie la vélocité d'une entité en fonction d'un certain lapse de temps.

    /*
     * Getter & Setter utilisés pour implémenter un système de rebond des boules
     * lorsqu'elles touchent un bord de la fenêtre. Je n'ai pas eu le temps de le finir.
     */
    double getPx() const;
    void setPx(double px);
    double getPy() const;
    void setPy(double py);


    /*
     * px, py : Position en X et en Y des entités
     * vx, vy : Vélocité en X et Y
     * red, blue, green : Couleurs RGBA d'une entité, l'alpha étant à 200 pour toutes les entités.
     * Taille : Taille de l'entité (aléatoire entre 1 et 10)
     * gStep : Utilisé pour changer la vélocité des entités. Par défaut est à 0 et ne peut pas être négatif (une entité ne peut pas reculer, elles ne font qu'avancer)
     */
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
