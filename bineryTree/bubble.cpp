#include <iostream>

using namespace std;

// void bubbleSort(int *v, int inicio, int fim){
//         if(inicio < fim){
//         for(int j = fim-1; j>inicio;j--){
//             if(v[j]<v[j-1]){
//                 int aux;
//                 aux = v[j];
//                 v[j] = v[j-1];
//                 v[j-1] = aux;
//             }
//         }
//         bubbleSort(v,inicio+1,fim);
//     }
// }
// void selecSort(int *v, int inicio,int fim){
//     int pos = 0;
//     for(int i=inicio;i<fim-1;i++){
//         pos = i+1;
//         for(int j = i+1;j<fim; j++){
//             if(v[j] < v[pos]){
//                 pos = j;
//             }
//         }
//         int aux;
//         aux = v[i];
//         v[i] = v[pos];
//         v[pos] = aux;
//     }
// }
void selecSort(int *v, int inicio,int fim){
    int pos = 0;
    if(inicio < fim-1){
        pos = inicio+1;
        for(int j = inicio+1;j<fim; j++){
            if(v[j] < v[pos]){
                pos = j;
            }
        }
        int aux;
        aux = v[inicio];
        v[inicio] = v[pos];
        v[pos] = aux;
        selecSort(v,inicio+1,fim);
    }
}

void imprimir(int *v, int tam){
    for(int i=0;i<tam;i++){
        cout << v[i] << "-";
    }
    cout << endl;
}

int main(){
    int v[5] = {3,1,5,2,4};
    imprimir(v,5);
    selecSort(v,0,5);
    // bubbleSort(v,0,5);
    imprimir(v,5);

    return 0;
}