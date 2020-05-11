//
// Created by Romain on 11/05/2020.
//

#pragma once


#include "Plante.h"
#include <iostream>

class PlanteCarnivore : public Plante {

private:
    int nombreJourDepuisDernierMouche;

public:
    PlanteCarnivore();

    void grandir() override ;

    void inspecter() override ;

    void completerBesoin() override ;
    float getValeur() override ;

};


