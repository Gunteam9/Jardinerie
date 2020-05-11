//
// Created by Romain on 11/05/2020.
//

#pragma once

#include <vector>
#include "Plante.h"
#include "Fleur.h"
#include "PlanteCarnivore.h"


class Botaniste {
private:
    float money = 100;
    std::vector<Plante*> plantes;

public:
    void dormir();
    void acheterPlante();
    void acheterEtAjouterEngrais();
    void vendrePlante();

    void interagirAvecFleur();
};


