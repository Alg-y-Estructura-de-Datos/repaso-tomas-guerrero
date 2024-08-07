#include <iostream>
#include "Ej4.h"

menu::menu(int n1, int n2, float r, int p)
{
  num1 = n1;
  num2 = n2;
  radio = r;
  potencia = p;
}

int menu::sumaEnteros(int num1, int num2)
{
  int suma = num1 + num2;

  return suma;
}

float menu::AreaCirculo(float radio)
{
  float radioTotal = (3.14) * radio * radio;

  return radioTotal;
}

int menu::potenciaNumero(int n1, int potencia)
{
  int total;
  for (int i = 1; i < potencia; i++)
  {
    total *= n1;
  }

  return total;
}
