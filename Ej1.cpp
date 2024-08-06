#include <iostream>
using namespace std;

void interCambioJugos(float &, float &);

int main()
{

    cout << "Examen Final Prog 3" << endl;

    float jugoManzana, jugoNaranja;

    cout << " Ingrese cuantos litros tiene el vaso con jugo de Manzana: ";
    cin >> jugoManzana;
    cout << " Ingrese cuantos litros tiene el vaso con jugo de Naranja: ";
    cin >> jugoNaranja;

    cout << " ANTES INTERCAMBIO " << endl;

    cout << " El jugo de Naranja tiene " << jugoNaranja << " litros. " << endl;
    cout << " El jugo de Manzana tiene " << jugoManzana << " litros. " << endl;

    cout << " DESPUES INTERCAMBIO " << endl;
    interCambioJugos(jugoManzana, jugoNaranja);

    cout << " El jugo de Naranja tiene " << jugoNaranja << " litros. " << endl;
    cout << " El jugo de Manzana tiene " << jugoManzana << " litros. " << endl;
    return 0;
}

void interCambioJugos(float &jugoManzana, float &jugoNaranja)
{

    float aux = jugoManzana;
    jugoManzana = jugoNaranja;
    jugoNaranja = aux;
}
