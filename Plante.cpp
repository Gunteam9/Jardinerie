//
// Created by Romain on 11/05/2020.
//

#include "Plante.h"

using namespace std;

Plante::Plante(std::string _nomEspece, int _maxPointDeCroissance) :
    estMorte(false), nomEspece(_nomEspece), engrais(false), hydratation(MAX_HYDRATATION), taille(0),
    sante(100), pointDeCroissance(0), maxPointDeCroissance(_maxPointDeCroissance), nombreJourDepuisCroissanceMax(0) {}

void Plante::ajouterEngrais() {
    engrais = true;
}

void Plante::grandir() {
    if (!estMorte) {
        if (bonneSante()) {
            if (engrais)
                pointDeCroissance += 10;
            else
                pointDeCroissance += 5;
        } else {
            if (engrais)
                pointDeCroissance += 5;
            else
                pointDeCroissance += 2;
        }

        engrais = false;
        hydratation -= 10;
        taille += 10;

        if (hydratation <= 0 || taille >= MAX_TAILLE)
            sante -= 10;
        else
            sante += 10;

        if (aGrandie())
            nombreJourDepuisCroissanceMax++;
    } else
        cout << "Cette plante est morte" << endl;
}

void Plante::tailler() {
    if (!estMorte) {
        taille = 0;
        cout << "Plante taille" << endl;
    }
    else
        cout << "Cette plante est morte" << endl;
}

void Plante::arroser() {
    if (!estMorte) {
        hydratation = MAX_HYDRATATION;
        cout << "Plante arrose";
    }
    else
        cout << "Cette plante est morte" << endl;
}

bool Plante::aGrandie() {
    return pointDeCroissance >= maxPointDeCroissance;
}

bool Plante::aEngrais() {
    return engrais;
}

bool Plante::bonneSante() {
    if (sante >= 0)
        return true;
    else {
        if (sante >= -50)
            return false;
        else {
            estMorte = true;
            return false;
        }
    }
}

void Plante::inspecter() {
    cout << "Espece: " << nomEspece << endl;
    cout << "Hydratation: " << hydratation << endl;
    cout << "Taille: " << taille << endl;
    cout << "Sante: " << sante << endl;
    cout << "Croissance: " << pointDeCroissance << "/" << maxPointDeCroissance << endl;
}

