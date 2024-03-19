#include <iostream>

using namespace std;

const int N = 5; 

void imprimirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void rotar90Grados(int matriz[N][N], int matrizRotada[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrizRotada[j][N - 1 - i] = matriz[i][j];
        }
    }
}

int problema14() {
    int matriz[N][N]; 
    int matrizRotada[N][N]; 

    int contador = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = contador++;
        }
    }

    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz);

    rotar90Grados(matriz, matrizRotada);

    cout << "\nMatriz rotada 90 grados:" << endl;
    imprimirMatriz(matrizRotada);

    return 0;
} 