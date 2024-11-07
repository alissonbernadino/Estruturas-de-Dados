// #include <iostream>

// using namespace std;
// void particiona(int *v, int inicio, int fim){
//     if(inicio >= fim) return;
//     int pivo = (v[inicio]+v[fim]+v[(inicio+fim)/2])/3;
//     int i = inicio;
//     int f = fim;
//     while(inicio < fim && v[inicio] < pivo){
//         inicio++;
//     }
//     while(inicio < fim && v[fim] > pivo){
//         fim--;
//     }
//     int aux;
//     aux = v[inicio];
//     v[inicio] = v[fim];
//     v[fim] = aux;
//     if(inicio != fim){
//         particiona(v,inicio+1,fim-1);
//     }else{
//         particiona(v,i,inicio-1);
//         particiona(v,fim+1,f);
//     }
// }
// //quick sort
// int main(){
//     int numero[9] = {13,55,42,3,2,14,76,98,8};
//     for(int i=0; i< 9;i++){
//         cout << numero[i]<<"-";
//     }
//     particiona(numero, 0, 8);
//     cout << endl;
//     for(int i=0; i< 9;i++){
//         cout << numero[i]<<"-";
//     }

//     return 0;
// }

// // int menorElemento(int *numero, int resultado, int tam){ //*numero eh um ponteiro p um array, *numero[] seria um array de ponteiros para inteiros
// //  if(tam == 0){
// //     return resultado;
// //  }else{
// //     if(resultado>numero[tam]){
// //         return menorElemento(numero,resultado = numero[tam], tam-1);
// //     }else{
// //         return menorElemento(numero,resultado, tam-1);
// //     }
// //  }

// // }

// // int main(){
// //     int numero[10] = {23,33,45,22,123,5,54,2,34,99}; //isso nao pode em c++=     int *numero = new int[5,2,8,10];

// //     cout << "o menor valor eh: " << menorElemento(numero, numero[9], 9);



// //     return 0;
// // }

// // void converter(int *&numero){
// //     int aux;
// //     if(*numero > 0){
// //         aux = *numero%2;
// //         *numero = *numero/2;
// //         converter(numero);
// //         cout << aux;
// //     }
// // }



// // int main(){
// //     int *numero = new int;
// //     cout << "informe o valor para converter para decimal: \n";
// //     cin >> *numero;
// //     cout << "sem conversao: " << *numero;
// //     cout << "convertido: ";
// //     converter(numero);

// //     return 0;
// // }

// // void potencial(int vet[], int inicio, int final){
// //     int aux;
// //     if(inicio > final){
// //         aux = vet[final];
// //         vet[final] = vet[inicio];
// //         vet[inicio] = aux;
// //         potencial(vet, inicio-1,final+1);

// //     }

    
// // }
// // int main(){
// //     int vet[5] = {901, 900, 234, 800,700};
// //     int tamVet = 5;
// //     for(int i=0; i<tamVet;i++){
// //         cout << " " << vet[i];
// //     }
// //     cout << endl;
// //     potencial(vet, tamVet-1, 0);
// //     for(int i=0; i<tamVet;i++){
// //         cout << " " << vet[i];
// //     }
    
    


// //     return 0;
// // }

// // #include <iostream>

// // using namespace std;

// // int potencial(int* vet, int inicio) {
// //     if (inicio < 0) {
// //         return 0;
// //     } else {
// //         return vet[inicio] + potencial(vet, inicio - 1);
// //     }
// // }

// // int main() {
// //     int tamVet;
// //     cout << "Informe o tamanho do vetor: " << endl;
// //     cin >> tamVet;

// //     // Alocação dinâmica de memória para o array
// //     int* vet = new int[tamVet];

// //     cout << "Informe os valores do vetor:\n";
// //     for (int i = 0; i < tamVet; i++) {
// //         cout << "Valor: ";
// //         cin >> vet[i];
// //         cout << endl;
// //     }

// //     // Chamada da função para calcular a soma
// //     cout << "A soma dos valores do vetor é: " << potencial(vet, tamVet - 1) << endl;

// //     // Liberação da memória alocada
// //     delete[] vet;

// //     return 0;
// // }
