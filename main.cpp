#include <iostream>
#include "Botaniste.h"

using namespace std;

int main() {

    Botaniste* botaniste = new Botaniste();

    cout << "Bienvenue a la jardinerie" << endl;

    while (true) {
        int choice = -1;
        cout << "Selectionnez une action a faire:" << endl;
        cout << "[1] Acheter une plante" << endl;
        cout << "[2] Vendre toutes les plantes matures" << endl;
        cout << "[3] Acheter de l engrais" << endl;
        cout << "[4] Interagir avec une plante" << endl;
        cout << "[5] Dormir" << endl;
        cout << "[6] Quitter la jardinerie" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                botaniste->acheterPlante();
                break;
            case 2:
                botaniste->vendrePlante();
                break;
            case 3:
                botaniste->acheterEtAjouterEngrais();
                break;
            case 4:
                botaniste->interagirAvecFleur();
                break;
            case 5:
                botaniste->dormir();
                break;
            case 6:
                return 0;
            default:
                cout << "Choix incorrect" << endl;
                continue;
        }
    }
}
