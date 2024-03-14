#include <string>
#include <cmath>

int problema4(std::string b){

    int i = 0;
    int num = 0;

    while (b[i] != 0x00) {
        b[i] = b[i] - 48;
        num = num + (((int) b[i]) * pow(10, (b.size() - (i + 1))));
        ++i;
    }

    return num;

}
