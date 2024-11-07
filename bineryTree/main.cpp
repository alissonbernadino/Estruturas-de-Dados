// #include <iostream>

// using namespace std;

// void quickSort(int v[15], int inicio, int fim){
//     if(inicio >= fim) return;
//     int i,j;
//     i = inicio;
//     j = fim;
//     int pivo = (v[inicio]+v[fim]+ v[(inicio+fim)/2])/3;
//     while(inicio < fim){
//         while(inicio < fim && v[inicio] <= pivo){
//             inicio++;
//         }
//         while(inicio < fim && v[fim] > pivo){
//             fim--;
//         }
        
//         int aux = v[inicio];
//         v[inicio] = v[fim];
//         v[fim] = aux;
        
//     }
//     quickSort(v,i,inicio-1);
//     quickSort(v,fim,j);
// }
// void imprimir(int *v, int tam){
//     for(int i=0;i<tam;i++){
//         cout << v[i] << "-";
//     }
// }
// int main() {
//     int v[15] = {3,9,5,1,33,8,99,0,4,7,19,101,88,22,17};
//     imprimir(v,15);
//     cout << endl;
//     quickSort(v,0,14);
//     imprimir(v,15);
   
//     return 0;
// }

// #include <iostream>

// using namespace std;

// void imprimir(int *v, int tam) {
//     for (int i = 0; i < tam; i++) {
//         cout << v[i] << "-";
//     }
//     cout << endl;
// }

// void quickSort(int v[15], int inicio, int fim) {
//     if (inicio >= fim) return; // Condição de parada
//     int pivo = (v[inicio] + v[fim] + v[(inicio + fim) / 2]) / 3;

//     // Guardar os valores originais de inicio e fim para a recursão
//     int i = inicio;
//     int j = fim;

//     while (inicio < fim) {
//         // Move 'inicio' para a direita enquanto os elementos forem menores que o pivô
//         while (inicio < fim && v[inicio] <= pivo) {
//             inicio++;
//         }
//         // Move 'fim' para a esquerda enquanto os elementos forem maiores que o pivô
//         while (inicio < fim && v[fim] > pivo) {
//             fim--;
//         }
//         // Troca os elementos em 'inicio' e 'fim'
        
//             int aux = v[inicio];
//             v[inicio] = v[fim];
//             v[fim] = aux;
        
//     }
//     cout << inicio << endl;
//     // Chamada recursiva para as duas metades
//     quickSort(v, i, fim-1); // Ordena a metade esquerda
//     quickSort(v, inicio, j); // Ordena a metade direita
// }


// int main() {
//     int v[15] = {3,9,5,1,33,8,99,0,4,7,19,101,88,22,17};
    
//     // Imprime o array antes da ordenação
//     imprimir(v, 15);

//     // Chama o quickSort para ordenar o array
//     quickSort(v, 0, 14);

//     // Imprime o array após a ordenação
//     imprimir(v, 15);

//     return 0;
// }
