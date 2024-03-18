#include <iostream>
#include <vector>
using namespace std;


bool problema12(vector<vector<int>>& cuadrado) {
    int n = cuadrado.size();
    int suma = 0;

    for (int j = 0; j < n; j++) {
        suma += cuadrado[0][j];
    }

    for (int i = 1; i < n; i++) {
        int sumaFila = 0;
        for (int j = 0; j < n; j++) {
            sumaFila += cuadrado[i][j];
        }
        if (sumaFila != suma) return false;
    }

    for (int j = 0; j < n; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < n; i++) {
            sumaColumna += cuadrado[i][j];
        }
        if (sumaColumna != suma) return false;
    }

    int sumaDiagonal = 0;
    for (int i = 0; i < n; i++) {
        sumaDiagonal += cuadrado[i][i];
    }
    if (sumaDiagonal != suma) return false;

    sumaDiagonal = 0;
    for (int i = 0; i < n; i++) {
        sumaDiagonal += cuadrado[i][n - 1 - i];
    }
    if (sumaDiagonal != suma) return false;

    return true;
}