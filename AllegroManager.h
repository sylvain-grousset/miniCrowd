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
    AllegroManager(int width, int height, int nbEntities); //Constructeur avec le nombre d'entités souhaitées ainsi que la taille de la fenêtre.
    ~AllegroManager();

private:
    int width;                              // Taille en largeur de la fenêtre
    int height;                             // Taille en hauteur de la fenêtre
    int nombreEntities;                     // Nombre d'entités
    unsigned int gStep = 0;                 // Utilisé pour mettre à jour la vélocité des entités.

    ALLEGRO_KEYBOARD_STATE gKbdstate;       // Structure Allegro permettant de récupérer les touches du clavier.
    ALLEGRO_DISPLAY* gDisplay = nullptr;

    EntitiesManager entitiesManager;         // Instance de la classe EntitiesManager pour mettre à jour les entités.

    void init();                             // Initialise tous les composants de base (définition de la fenêtre, méthode de test ...).
    void mainloop();                         // Cette fonction est le coeur du programme, elle initialise les entités et les mets à jours tout en gérant la fermeture du programme avec la touche espace.
    void crashOnError(string message);       // Affiche le message d'erreur et quitte l'application.

};


#endif //MINICROWD_ALLEGROMANAGER_H
