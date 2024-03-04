#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;


int problema2() {
    srand(time(0));

    // char cadena[10] = {'A', 'B', 'A', 'B', 'B', 'E', 'E', 'A', 'A', 'B'};
    char cadena[200] = {};
    int count = 0;
    char letra;

    for (int i = 0; i < 200; ++i){
        cadena[i] = 65 + rand() % (90 - 65 + 1);
        cout << cadena[i];
    }

    cout << endl;

    for (int i = 0; i < 200; ++i) {

        letra = cadena[i];
        
        if (letra != 96){

            count = 0;
            for (int j = 0; j < 200; ++j){

                if (cadena[j] == letra) {
                    count += 1;
                    cadena[j] = 96;
                }

            }
        
        cout << letra << ": " << count << endl;

        }


    }


    return 0;
}
