//
// Created by Romain on 11/05/2020.
//

#include "Botaniste.h"

using namespace std;

void Botaniste::dormir() {
    for (int i = 0; i < plantes.size(); ++i) {
        plantes[i]->grandir();
    }
}

void Botaniste::acheterPlante() {
    int choice = -1;
    do {
        cout << "Quelle plante voulez vous acheter ?" << endl;
        cout << "[1] Fleur (10 dollars)" << endl;
        cout << "[2] Plante carnivore (20 dollars)" << endl;
        cin >> choice;
    } while (choice < 0 && choice >= 2);

    switch (choice) {
        case 1:
            if (money >= 10) {
                money -= 10;
                plantes.push_back(new Fleur());
                cout << "Vous avez achete une fleur";
            }
            else
                cout << "Vous n'avez pas assez d'argent" << endl;
            break;
        case 2:
            if (money >= 20) {
                money -= 20;
                plantes.push_back(new PlanteCarnivore());
                cout << "Vous avez achete une plante carnivore" << endl;
            } else
                cout << "Vous n'avez pas assez d'argent" << endl;
            break;
    }
}

void Botaniste::acheterEtAjouterEngrais() {
    if (money >= 50) {
        for (int i = 0; i < plantes.size(); ++i) {
            plantes[i]->ajouterEngrais();
        }
        cout << "Vous avez achete de l'engrais pour toutes vos plants" << endl;
    } else
        cout << "Vous n'avez pas assez d'argent" << endl;
}

void Botaniste::vendrePlante() {
    int nombrePlanteVendu = 0;
    int argentGagne = 0;
    for (size_t i = plantes.size() - 1; i > 0; i--) {
        if (plantes[i]->aGrandie()) {
            money += plantes[i]->getValeur();
            argentGagne += plantes[i]->getValeur();
            plantes.erase(plantes.begin() + i);
        }
    }

    cout << "Vous avez vendu " <<  nombrePlanteVendu << " plantes pour un total de " << argentGagne << " dollars" << endl;
}

void Botaniste::interagirAvecFleur() {
    int choixPlante = -1;
    do {
        cout << "Liste des plantes" << endl;
        for (int i = 0; i < plantes.size(); ++i) {
            cout << "[" << i << "] Bonne sante ? " << plantes[i]->bonneSante() << endl;
        }
        cin >> choixPlante;
    } while (choixPlante < 0 || choixPlante >= plantes.size());

    int choixInteraction = -1;
    do {
        cout << "Que voulez vous faire avec cette plante ?" << endl;
        cout << "[1] Inspecter" << endl;
        cout << "[2] Tailler" << endl;
        cout << "[3] Arroser" << endl;
        cin >> choixInteraction;

        switch (choixInteraction) {
            case 1:
                plantes[choixPlante]->inspecter();
                break;
            case 2:
                plantes[choixPlante]->tailler();
                break;
            case 3:
                plantes[choixPlante]->arroser();
                break;
            default:
                cout << "Choix incorrect" << endl;
                break;
        }
    } while (choixInteraction <= 0 || choixInteraction > 3);

}
