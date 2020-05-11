//
// Created by Romain on 11/05/2020.
//

#pragma once


#include "Plante.h"

class Fleur : public Plante {

private:

public:
    Fleur();

    void completerBesoin() override;
    float getValeur() override;


};


