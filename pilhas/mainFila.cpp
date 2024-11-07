#include <iostream>
#include "varifila.cpp"

using namespace std;

int main()
{
  fila filaTeste(5);
  filaTeste.mostrarFila();
  filaTeste.addFila();
  filaTeste.mostrarFila();
  filaTeste.removeFila();
  filaTeste.mostrarFila();
  filaTeste.apagarFila();
  // filaTeste.mostrarFila();

  return 0;
}