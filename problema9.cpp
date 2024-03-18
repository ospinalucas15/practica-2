#include <iostream>
#include <string>

using namespace std;

int problema9() {
    int n;
    string cadena;

    using namespace std;
    cout << "Ingresa el tamano de las secciones (n): ";
    cin >> n;
    cout << "Ingresa la cadena de numeros: ";
    cin >> cadena;

    int longitudOriginal = cadena.length();
    int cerosParaAgregar = (n - (longitudOriginal % n)) % n;
    int suma = 0;

    for(int i = 0; i < cerosParaAgregar; ++i) {
        cadena = "0" + cadena;
    }

    for(int i = 0; i < cadena.length(); i += n) {
        int numero = 0;
        for(int j = i; j < i + n; ++j) {
            numero = numero * 10 + (cadena[j] - '0');
        }
        suma += numero;
    }

    string cadenaConCeros = (cerosParaAgregar > 0) ? string(cerosParaAgregar, '0') + string(cadena, cerosParaAgregar, longitudOriginal) : cadena;

    cout << "Original: " << cadenaConCeros << ". Suma: " << suma << "." << endl;

    return 0;
}