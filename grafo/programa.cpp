#include <iostream>
#include "matrizAdj.cpp"

using namespace std;

int main()
{

  int qtd, escolha, peso;
  cout << "informe a quantidade de vertices que voce ira disponibilizar" << endl;
  cin >> qtd;
  string vertices[qtd], vertice1, vertice2;
  for (int i = 0; i < qtd; i++)
  {
    cout << "informe o vertice " << i << endl;
    cin >> vertices[i];
  }
  Grafo grafo(qtd);
  grafo.setVertices(vertices);
  do
  {
    cout << "informe a sua escolha: \n"
         << "1: adicionar arestas \n2: mostrar matriz";
    cin >> escolha;
    if (escolha == 1)
    {
      cout << "informe o vertice de onde vai sair: ";
      cin >> vertice1;
      cout << "\n informe o vertice que ira receber: ";
      cin >> vertice2;
      cout << "\ninforme o custo de percorrer este percurso: ";
      cin >> peso;
      cout << endl;

      grafo.setArestas(peso, vertice1, vertice2);
    }
    if (escolha == 2)
    {
      grafo.mostrarMatriz();
    }
    if (escolha == 0)
    {
      cout << "obrigado" << endl;
    }
  } while (escolha != 0);

  return 0;
}
