#include <iostream>
#include <string>

using namespace std;

void problema5(int numero, string& cadena) {
    cadena = "";  
    if (numero == 0) {
        cadena = "0";
        return;
    }
    
    int numeroAbsoluto = numero;
    bool esNegativo = numero < 0;
    if (esNegativo) {
        numeroAbsoluto = -numero;
    }

    while (numeroAbsoluto > 0) {
        char digito = '0' + (numeroAbsoluto % 10);
        cadena = digito + cadena;
        numeroAbsoluto /= 10;
    }

    if (esNegativo) {
        cadena = "-" + cadena;
    }
}