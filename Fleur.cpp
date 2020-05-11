//
// Created by Romain on 11/05/2020.
//

#include "Fleur.h"

Fleur::Fleur() : Plante("Fleur", 50) {}

void Fleur::completerBesoin() {

}

float Fleur::getValeur() {
    int valeurDeBase = 15;

    if (aGrandie()) {
        if (nombreJourDepuisCroissanceMax < 5)
            return valeurDeBase * 2;
        else
            return valeurDeBase / 10;
    }
    else
        return 0;
}
