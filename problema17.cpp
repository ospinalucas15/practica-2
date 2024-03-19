#include <iostream>
using namespace std;

int sumaDivisores(int numero) {
    int suma = 0;
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int sumarAmigables(int limite) {
    int sumaAmigables = 0;
    for (int a = 1; a < limite; a++) {
        int b = sumaDivisores(a);
        if (b > a && sumaDivisores(b) == a) {
            sumaAmigables += a + b;
        }
    }
    return sumaAmigables;
}

int problema17() {
    int limite;
    cout << "Ingresa el numero limite: ";
    cin >> limite;

    int suma = sumarAmigables(limite);
    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}