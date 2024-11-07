#include <iostream>

using namespace std;

class Grafo
{
private:
  int numeroVertices;
  int numeroArestas;
  int qtdVertices;
  string *vertices;
  int **matrizAdjascencia;

public:
  Grafo(int qtd)
  {
    qtdVertices = qtd;
    numeroVertices = 0;
    numeroArestas = 0;
    vertices = new string[qtdVertices];
    matrizAdjascencia = new int *[qtdVertices];
    for (int i = 0; i < qtdVertices; i++)
    {
      matrizAdjascencia[i] = new int[qtdVertices];
    }
    for (int i = 0; i < qtdVertices; i++)
    {
      for (int j = 0; j < qtdVertices; j++)
      {
        matrizAdjascencia[i][j] = 0;
      }
    }
  }
  ~Grafo()
  {
    delete[] vertices;
    for (int i = 0; i < qtdVertices; i++)
    {
      delete[] matrizAdjascencia[i];
    }
    delete[] matrizAdjascencia;
  }

  void setVertices(string objetos[])
  {
    vertices = objetos;
  }

  void setArestas(int peso, string onde, string praOnde)
  {
    int indice1, indice2 = 0;
    indice1 = getIndiceAresta(onde);
    indice2 = getIndiceAresta(praOnde);
    if (indice1 != -1 && indice2 != -1)
    {
      matrizAdjascencia[indice1][indice2] = peso;
      matrizAdjascencia[indice2][indice1] = peso;
    }
    else
    {
      cout << "voce disponibilizou um vertice não disponivel" << endl;
    }
  }

  int getIndiceAresta(string obj)
  {
    for (int i = 0; i < qtdVertices; i++)
    {
      if (vertices[i] == obj)
      {
        return i;
      }
    }
    return -1;
  }

  void mostrarMatriz()
  {
    cout << " a matriz ficou assim: " << endl;
    cout << "    ";
    for (int i = 0; i < qtdVertices; i++)
    {
      cout << "|" << vertices[i];
    }
    cout << endl;
    for (int i = 0; i < qtdVertices; i++)
    {
      for (int j = 0; j < qtdVertices; j++)
      {
        cout << matrizAdjascencia[i][j] << ", ";
      }
      cout << "|";
      cout << "<- " << vertices[i] << endl;
    }
  }
};