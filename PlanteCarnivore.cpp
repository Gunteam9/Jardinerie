//
// Created by Romain on 11/05/2020.
//

#include "PlanteCarnivore.h"

using namespace std;

PlanteCarnivore::PlanteCarnivore() : Plante("Plante carnivore", 30), nombreJourDepuisDernierMouche(7) {}

void PlanteCarnivore::grandir() {
    Plante::grandir();

    nombreJourDepuisDernierMouche++;

    if (nombreJourDepuisDernierMouche >= 7)
        sante -= 10;
}

void PlanteCarnivore::completerBesoin() {
    if (nombreJourDepuisDernierMouche >= 7) {
        nombreJourDepuisDernierMouche = 0;
        cout << "La plante a mange la mouche" << endl;
    }
}

float PlanteCarnivore::getValeur() {
    if (aGrandie())
        return 40;
    else
        return 0;
}

void PlanteCarnivore::inspecter() {
    Plante::inspecter();
    if (nombreJourDepuisDernierMouche < 7)
        cout << "La plante a mangee une mouche recemment" << endl;
    else
        cout << "La plante a faim. Elle veut une mouche" << endl;
}


