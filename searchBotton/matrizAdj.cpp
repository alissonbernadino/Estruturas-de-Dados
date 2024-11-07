#include <iostream>
#include "no.cpp"
#include "pilha.cpp"
#include "fila.cpp"

using namespace std;

class MatrizAdj
{
private:
  string *vertices;
  int **matrizAdj;
  int maxVertices;
  int maxArestas;
  int cont;

  bool *jaAdc;

public:
  MatrizAdj(int max)
  {
    this->maxVertices = max;
    maxArestas = max * max;
    cont = 0;
    vertices = new string[maxVertices];
    jaAdc = new bool[maxVertices];
    matrizAdj = new int *[maxVertices];

    for (int i = 0; i < maxVertices; i++)
    {
      matrizAdj[i] = new int[maxVertices];
    }

    for (int i = 0; i < maxVertices; i++)
    {
      for (int j = 0; j < maxVertices; j++)
      {
        matrizAdj[i][j] = 0;
      }
    }
  }

  ~MatrizAdj()
  {
    for (int i = 0; i < maxVertices; i++)
    {
      delete[] matrizAdj[i];
    }
    delete[] matrizAdj;
  }

  void setVertices(string vertice)
  {
    if (verticeCheio())
    {
      cout << "o vetor de vertices esta cheio!\n";
    }
    else
    {
      this->vertices[cont] = vertice;
      this->cont++;
    }
  }

  void setAresta(string inicio, string fim, int peso)
  {
    int inicial, final;
    inicial = getIndice(inicio);
    final = getIndice(fim);
    if (inicial == -1 || final == -1)
    {
      cout << "voce forneceu um vertice inesistente! \n";
    }
    else
    {
      matrizAdj[inicial][final] = peso;
    }
  }

  bool verticeCheio()
  {
    return (this->cont == maxVertices);
  }

  int getIndice(string obter)
  {
    for (int i = 0; i < maxVertices; i++)
    {
      if (vertices[i] == obter)
      {
        return i;
      }
    }
    return -1;
  }

  void mostrar()
  {
    cout << "matriz de adjacencia para os vertices: \n";
    for (int i = 0; i < maxVertices; i++)
    {
      for (int j = 0; j < maxVertices; j++)
      {
        cout << matrizAdj[i][j] << " ,";
      }
      cout << endl;
    }
    cout << endl;
  }

  void procuraLargura(string inicio, string fim)
  {
    iniciarJaadc();
    Fila fila;
    int inicial, final;
    inicial = getIndice(inicio);
    final = getIndice(fim);
    bool achou = false;
    bool tem = true;
    fila.setElemento(vertices[inicial]);
    string avalia;

    while (achou == false && tem == true)
    {
      avalia = fila.getElemento();
      if (avalia == "n")
      {
        tem = false;
      }
      if (avalia == vertices[final])
      {
        achou = true;
      }
      else
      {
        cout << avalia << " visitado\n";
        for (int i = 0; i < maxVertices; i++)
        {
          if (vertices[i] == avalia)
          {
            jaAdc[i] = true;
          }
        }
        for (int i = 0; i < maxVertices; i++)
        {
          if (matrizAdj[inicial][i] != 0 && jaAdc[i] != true)
          {
            fila.setElemento(vertices[i]);
          }
        }
      }
    }

    if (achou == true)
    {
      cout << "caminho encontrado de: " << vertices[inicial] << "ate: " << vertices[final] << endl;
    }
    else
    {
      cout << "caminho nao encontrado! \n";
    }
  }

  void procuraProfundidade(string inicio, string fim)
  {

    iniciarJaadc();
    pilha pilha;
    bool achou = false;
    int inicial = getIndice(inicio);
    int final = getIndice(fim);
    pilha.setElemento(vertices[inicial]);
    cout << vertices[inicial] << " adicionado na pilha\n";
    string comparar = "";
    while (!pilha.estaVazio() && achou == false)
    {
      comparar = pilha.getElemento();
      inicial = getIndice(comparar);
      cout << comparar << " visitado\n";
      if (comparar == vertices[final])
      {
        cout << "caminho para: " << vertices[final] << "encontrado!\n";
        achou = true;
      }
      else
      {
        jaAdc[inicial] = true;
        for (int i = 0; i < maxVertices; i++)
        {
          if (matrizAdj[inicial][i] != 0 && jaAdc[i] == false)
          {
            pilha.setElemento(vertices[i]);
            cout << vertices[i] << " adicionado na pilha\n";
          }
        }
      }
    }
    if (achou == false)
    {
      cout << "caminho para: " << vertices[final] << "nao encontrado\n";
    }
  }

  void iniciarJaadc()
  {
    for (int i = 0; i < maxVertices; i++)
    {
      jaAdc[i] = false;
    }
  }

  int getGrau(string elemento)
  {
    int conta = 0;
    for (int i = 0; i < maxVertices; i++)
    {
      conta = conta + matrizAdj[getIndice(elemento)][i];
    }
    return conta;
  }

  int getPeso(string inicio, string fim)
  {
    int inicial, final = 0;
    inicial = getIndice(inicio);
    final = getIndice(fim);
    return matrizAdj[inicial][final];
  }

  void mostrarVertices()
  {
    cout << "os vertices sao: \n";
    for (int i = 0; i < maxVertices; i++)
    {
      cout << vertices[i] << " ,";
    }
    cout << endl;
  }
};