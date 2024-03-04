#include <iostream>

using namespace std;

int problema1(){

    int plata[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};

    int can = 0;
    int division = 0;

    cout << "Ingrese la cantidad: ";
    cin >> can;

    for (int i = 0; i <= 9; i++) {
        division = can / plata[i];
        if (division >= 1) {
            can = can - (division * plata[i]);
            cout << plata[i] << " : " << division << endl;
        }

        else {
            cout << plata[i] << " : " << "0" << endl;
        }
    }

    cout << "Faltante: " << can << endl;

    return 0;
}