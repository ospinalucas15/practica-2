#include <iostream>
#include <string>

using namespace std;

int problema11() {
    const int FILAS = 15;
    const int ASIENTOS_POR_FILA = 20;
    string sala[FILAS];

    for (int i = 0; i < FILAS; ++i) {
        sala[i] = string(ASIENTOS_POR_FILA, '-');
    }

    char filaLetra;
    int numeroAsiento;
    char accion;

    while (true) {
        cout << "Estado actual de la sala:\n";
        for (int i = 0; i < FILAS; ++i) {
            cout << char('A' + i) << " " << sala[i] << "\n";
        }

        cout << "Ingrese acción (R para reservar, C para cancelar, S para salir): ";
        cin >> accion;
        
        if (accion == 'S' || accion == 's') {
            break;
        }

        cout << "Ingrese fila (letra A-O): ";
        cin >> filaLetra;
        cout << "Ingrese número de asiento (1-20): ";
        cin >> numeroAsiento;


        int fila = filaLetra - 'A';
        if ((accion == 'R' || accion == 'r') && sala[fila][numeroAsiento - 1] == '-') {
            sala[fila][numeroAsiento - 1] = '+';
            cout << "Asiento reservado con éxito.\n";
        } else if ((accion == 'C' || accion == 'c') && sala[fila][numeroAsiento - 1] == '+') {
            sala[fila][numeroAsiento - 1] = '-';
            cout << "Reserva cancelada con éxito.\n";
        } else {
            cout << "El asiento no se puede " << (accion == 'R' || accion == 'r' ? "reservar" : "cancelar") << ".\n";
        }
    }

    return 0;
}