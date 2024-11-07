#include <iostream>
#include "no.cpp"
using namespace std;

class pilha
{
private:
  No *topo;

public:
  pilha()
  {
    topo = nullptr;
  }
  ~pilha()
  {
    No *temp;
    while (topo != nullptr)
    {
      temp = topo;
      topo = topo->proximo;
      delete temp;
    }
  }
  void setElemento(string objeto)
  {
    No *novoNo = new No();
    if (estaVazio())
    {
      novoNo->elemento = objeto;
      novoNo->proximo = nullptr;
      topo = novoNo;
    }
    else
    {
      novoNo->elemento = objeto;
      novoNo->proximo = topo;
      topo = novoNo;
    }
  }

  string getElemento()
  {
    string retorno;
    if (estaVazio())
    {
      cout << "a pilha esta vazia.\n";
    }
    else
    {
      No *temp = topo;
      topo = topo->proximo;
      retorno = temp->elemento;
      delete temp;
      return retorno;
    }
  }

  void mostrar()
  {
    No *temp = topo;
    while (temp != nullptr)
    {
      cout << "elemento: " << temp->elemento << endl;
      temp = temp->proximo;
    }
  }

  bool estaVazio()
  {
    return (topo == nullptr);
  }
};
