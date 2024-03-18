#include <iostream>
#include <string>

using namespace std;

int problema6(){

    std::string in;
    int i = 0;

    cout << "Ingrese la cadena: ";
    cin >> in;

    while (in[i] != 0x00) {
        if ((in[i] >= 97) && (in[i] <= 122)){
            in[i] = in[i] - 32;
        }

        ++i;
    }

    cout << in << endl;

    return 0;
}