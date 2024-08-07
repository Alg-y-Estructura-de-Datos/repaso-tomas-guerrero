#include <iostream>
using namespace std;

bool marcarAsiento(bool asiento[][10], int, int);

int main()
{

        cout << "Examen Final Prog 3" << endl;

    const int asientos = 10;
    int fila, columna;
    bool teatro[asientos][asientos] = {false};

    cout << " Elija la fila del asiento que desea: ";
    cin >> fila;
    cout << " Elija la columna del asiento que desea: ";
    cin >> columna;

    if (teatro[fila - 1][columna - 1] == 1)
    {
        cout << " Este asiento ya esta ocupado... " << endl;
    }
    else
    {
        marcarAsiento(teatro, fila, columna);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << teatro[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

bool marcarAsiento(bool asiento[][10], int fila, int columna)
{
    return asiento[fila - 1][columna - 1] = true;
}
