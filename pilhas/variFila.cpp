#include <iostream>
#include "varifila.h"

using namespace std;

fila::fila(int t)
{
  tamanho = t;
  vet = new int[maxx];
  if (t > 0)
  {
    cout << "insira os primeiros valores da fila \n";
    for (int i = 0; i < tamanho; i++)
    {
      cout << "insira o valor: " << i + 1 << endl;
      cin >> vet[i];
    }
  }
}
void fila::addFila()
{
  if (cheiaFila())
  {
    cout << "que pena, a fila esta cheia \n";
  }
  else
  {
    cout << "insira o valor da posicao: " << tamanho << endl;
    cin >> vet[tamanho];
    tamanho++;
  }
}
void fila::removeFila()
{
  int remove;
  bool temp = 0;
  int troca = 0;
  if (vaziaFila())
  {
    cout << "a fila esta vazia, logo, nao eh possivel remover item: \n";
  }
  else
  {
    cout << "escolha qual valor voce deseja retirar da fila: ";
    cin >> remove;
    for (int i = 0; i < tamanho; i++)
    {
      if (remove == vet[i])
      {
        temp = 1;
        vet[i] = 0;
        for (int j = i + 1; j < tamanho; j++)
        {
          troca = vet[j];
          vet[j - 1] = vet[j];
          vet[j - 1] = troca;
        }
        tamanho--;
      }
    }

    if (temp == 0)
    {
      cout << "o valor fornecido nao esta na lista\n insira outro";
      cin >> remove;
      removeFila();
    }
  }
}
bool fila::vaziaFila()
{
  return (tamanho == 0);
}
bool fila::cheiaFila()
{
  return (tamanho == maxx);
}
void fila::mostrarFila()
{
  if (vaziaFila())
  {
    cout << "infelizmente a fila esta vazia\n";
  }
  else
  {
    cout << "esta eh a fila feita ate o momento: [ ";
    for (int i = 0; i < tamanho; i++)
    {
      cout << vet[i] << " ,";
    }
    cout << "]";
  }
}
void fila::apagarFila()
{
  delete[] vet;
}