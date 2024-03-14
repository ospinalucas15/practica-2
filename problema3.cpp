#include <iostream>
#include <string>

using namespace std;

bool problema3(){

    std::string a;
    std::string b;
    int i = 0;

    cout << "Ingrese el string 1: ";
    cin >> a;
    cout << "Ingrese el strng 2: ";
    cin >> b;

    if (a.size() != b.size()){
        return 0;
    }

    else {
        while (a[i] != 0x00){
            if (a[i] != b[i]){
                return 0;
            }
            ++i;

        }
    }



    return 1;
}