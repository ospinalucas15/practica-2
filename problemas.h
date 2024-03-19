#ifndef PROBLEMAS_H
#define PROBLEMAS_H

#include <vector>

int problema1();
int problema2();
bool problema3();
int problema4(std::string b);
void problema5(int numero, string& cadena);
int problema6();
int problema8();
int problema7();
int problema9();
int problema10();
int problema11();
bool problema12(vector<vector<int>>& cuadrado);

//Problema 14
const int N = 5;
void imprimirMatriz(int matriz[N][N]);
void rotar90Grados(int matriz[N][N], int matrizRotada[N][N]);
int problema14();
//Problema 17
int sumaDivisores(int numero);
int sumarAmigables(int limite);
int problema17();


#endif // PROBLEMAS_H
