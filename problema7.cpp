#include <iostream>
#include <string>

using namespace std;

int problema7() {
    std::string palabra;
    cout << "Ingresa una palabra: ";
    cin >> palabra;
    
    std::string resultado;

    for (int i = 0; i < palabra.length(); ++i) {
        bool yaEsta = false;
        for (int j = 0; j < resultado.length(); ++j) {
            if (palabra[i] == resultado[j]) {
                yaEsta = true;
                break;
            }
        }
        if (!yaEsta) {
            resultado += palabra[i];
        }
    }
    
    cout << "Original: " << palabra << ". Sin repetidos: " << resultado << endl;
    
    return 0;
}