#include <iostream>
#include <problemas.h>
#include <string>

using namespace std;

int main()
{
    problema1(); 
    cout << endl;
    problema2();
    cout << endl;
    problema3();
    cout << endl;
    std::string a = "hola";
    problema4(a);
    cout << endl;

    // Inicio problema 5
    int numero;
    string cadenaResultado;

    cout << "Ingresa un numero entero: ";
    cin >> numero;

    problema5(numero, cadenaResultado);

    cout << "El entero convertido a cadena es: " << cadenaResultado << endl;

    // Fin problema 5

    problema6();
    cout << endl;
    problema7();
    cout << endl;
    problema8();
    cout << endl;
    problema9();
    cout << endl;
    problema10();
    cout << endl;
    problema11();
    cout << endl;

    // Inicio problema 12
    int n;
    cout << "Introduce el tamano del cuadrado magico: ";
    cin >> n;
    vector<vector<int>> cuadrado(n, vector<int>(n));

    cout << "Introduce los valores del cuadrado magico:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cuadrado[i][j];
        }
    }

    cout << "\\nTu cuadrado magico es:\\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << cuadrado[i][j] << ' ';
        }
        cout << "\\n";
    }

    if (problema12(cuadrado)) {
        cout << "Has creado un cuadrado magico." << endl;
    } else {
        cout << "Este no es un cuadrado mágico. Intenta de nuevo." << endl;
    }
    // Final problema 12

    cout << endl;
    problema14();
    cout << endl;
    problema17();

    return 0;
}
