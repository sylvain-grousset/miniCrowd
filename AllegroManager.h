//
// Created by grousses on 06/01/2022.
//

#ifndef MINICROWD_ALLEGROMANAGER_H
#define MINICROWD_ALLEGROMANAGER_H
#include <iostream>
#include <vector>
#include <thread>
#include <string>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "EntitiesManager.h"

using namespace std;
class AllegroManager {

public:
    AllegroManager(int largeur, int hauteur, int nbEntities); //Constructeur
    ~AllegroManager();

    int getWidth() const;
    void setWidth(int width);
    int getHeight() const;
    void setHeight(int height);

private:
    int width;                        //Taille en largeur de la fenêtre
    int height;                      //Taille en hauteur de la fenêtre
    int nombreEntities;              //Nombre d'entités
    unsigned int gStep = 0;

    ALLEGRO_KEYBOARD_STATE gKbdstate;
    ALLEGRO_DISPLAY* gDisplay = nullptr;
    EntitiesManager entitiesManager;

    void init();                             //Initialise tous les composants de base (définition de la fenêtre, méthode de test ...).
    void mainloop();
    void crashOnError(string message);       //Affiche le message d'erreur et quitte l'application.

};


#endif //MINICROWD_ALLEGROMANAGER_H
