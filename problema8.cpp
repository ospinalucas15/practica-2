#include <iostream>
#include <string>

using namespace std;

int problema8(){

    std::string in;
    std::string let;
    std::string num;

    int i = 0;

    cout << "Ingrese la cadena: ";
    cin >> in;

    while (in[i] != 0x00){

        if ((in[i] >= 48) && (in[i] <= 57)){
            num += in[i];
        }

        else {
            let += in[i];
        }

        ++i;
    }

    cout << "Original: " << in << endl;
    cout << "Texto: " << let;
    cout << " Numero: " << num << endl;

    return 0;
}