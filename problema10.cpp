#include <iostream>
#include <string>

using namespace std;

int problema10() {
    string numeroRomano;
    cout << "Ingresa el numero romano: ";
    cin >> numeroRomano;

    int total = 0;
    int valorActual = 0;
    int valorSiguiente = 0;

    for (int i = 0; i < numeroRomano.length(); ++i) {
        switch (numeroRomano[i]) {
            case 'I': 
                valorActual = 1; 
                break;
            case 'V': 
                valorActual = 5; 
                break;
            case 'X': 
                valorActual = 10; 
                break;
            case 'L': 
                valorActual = 50; 
                break;
            case 'C': 
                valorActual = 100; 
                break;
            case 'D': 
                valorActual = 500; 
                break;
            case 'M': 
                valorActual = 1000; 
                break;
            default: 
                valorActual = 0; 
                break;
        }

        if (i + 1 < numeroRomano.length()) {
            switch (numeroRomano[i + 1]) {
                case 'I': 
                    valorSiguiente = 1; 
                    break;
                case 'V': 
                    valorSiguiente = 5; 
                    break;
                case 'X': 
                    valorSiguiente = 10; 
                    break;
                case 'L': 
                    valorSiguiente = 50; 
                    break;
                case 'C': 
                    valorSiguiente = 100; 
                    break;
                case 'D': 
                    valorSiguiente = 500; 
                    break;
                case 'M': 
                    valorSiguiente = 1000; 
                    break;
                default: 
                    valorSiguiente = 0; 
                    break;
            }
        } else {
            valorSiguiente = 0;
        }

        if (valorActual < valorSiguiente) {
            total -= valorActual;
        } else {
            total += valorActual;
        }
    }

    cout << "El numero ingresado fue: " << numeroRomano << " Que corresponde a: " << total << "." << endl;

    return 0;
}