//
// Created by Romain on 11/05/2020.
//

#pragma once

#include <iostream>
#include <string>

#define MAX_TAILLE 100
#define MAX_HYDRATATION 100

class Plante {

protected:
    bool estMorte;

    std::string nomEspece;
    bool engrais;
    int hydratation;
    int taille;
    int sante;
    int pointDeCroissance;
    int maxPointDeCroissance;

    int nombreJourDepuisCroissanceMax;

public:
    Plante(std::string _nomEspece, int _maxPointDeCroissance);

    void ajouterEngrais();
    virtual void grandir();
    void tailler();
    void arroser();

    bool aGrandie();
    bool aEngrais();

    virtual void inspecter();

    virtual void completerBesoin() = 0;
    virtual float getValeur() = 0;

    bool bonneSante();

};


