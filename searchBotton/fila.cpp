#include <iostream>
#include "no.cpp"

using namespace std;

class Fila
{
private:
  No *primeiro;
  No *topo;

public:
  Fila()
  {
    primeiro = nullptr;
    topo = nullptr;
  }
  ~Fila()
  {
    No *temp;
    while (primeiro != nullptr && topo != nullptr)
    {
      temp = primeiro;
      primeiro = primeiro->proximo;
      delete temp;
    }
  }

  void setElemento(string objeto)
  {
    No *novoNo = new No;
    if (seVazio())
    {
      novoNo->elemento = objeto;
      novoNo->proximo = nullptr;
      primeiro = novoNo;
      topo = primeiro;
      primeiro->proximo = topo->proximo;
    }
    else
    {
      novoNo->elemento = objeto;
      novoNo->proximo = nullptr;
      topo->proximo = novoNo;
      topo = novoNo;
    }
  }

  string getElemento()
  {
    string retorno;
    if (seVazio())
    {
      cout << "a fila esta vazia! \n";
      return "n";
    }
    else
    {
      No *temp;
      temp = primeiro;
      retorno = primeiro->elemento;
      primeiro = primeiro->proximo;
      delete temp;
      return retorno;
    }
  }

  void mostrar()
  {
    No *temp = primeiro;
    while (temp != nullptr)
    {
      cout << "elemento: " << temp->elemento << endl;
      temp = temp->proximo;
    }
  }

  bool seVazio()
  {
    return (primeiro == nullptr && topo == nullptr);
  }
};