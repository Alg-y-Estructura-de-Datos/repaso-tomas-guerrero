#include <iostream>
using namespace std;

int calcularFactorial(int);
int calcularFactorialRecursivo(int);

int main()
{

    cout << "Examen Final Prog 3" << endl;

    int n;
    cout << " Ingrese el factorial que desea calcular: ";
    cin >> n;

    cout << " El factorial de " << n << " es " << calcularFactorial(n) << endl;
    cout << " El factorial de " << n << " calculado de forma recursiva es: " << calcularFactorialRecursivo(n) << endl;

    return 0;
}

int calcularFactorial(int n)
{
    int factorialTotal = 1;
    for (int i = 1; i <= n; i++)
    {
        factorialTotal *= i;
    }

    return factorialTotal;
}

int calcularFactorialRecursivo(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * calcularFactorial(n - 1);
    }
}