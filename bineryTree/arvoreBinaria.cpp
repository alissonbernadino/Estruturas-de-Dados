// #include <iostream>
// #include "arvoreBinaria.h"
// #include <stddef.h>

// using namespace std;

// arvoreBinaria::arvoreBinaria(){
//     raiz = NULL;
// }
// no* arvoreBinaria::obterRaiz(){
//     return raiz;
// }
// arvoreBinaria::~arvoreBinaria(){
//     deletarArvore(raiz);

// }
// void arvoreBinaria::deletarArvore(no *noAtual){
//     if (noAtual != NULL){
//         deletarArvore(noAtual->noEsquerda);
//         deletarArvore(noAtual->noDireita);
//         delete noAtual;
//     }

// }


// void arvoreBinaria::inserir(Aluno aluno){
//         no *noNovo = new no;
//         noNovo->aluno = aluno;
//         noNovo->noDireita = NULL;
//         noNovo->noEsquerda = NULL;
//     if(estaVazia()){
//         cout << "arvore vazia" << endl;
//         raiz = noNovo;

//     }else{
//         no *temp = raiz;
//         while(temp != NULL){

//             if(aluno.obterRegistro()  >  temp->aluno.obterRegistro()){
//                 if(temp->noDireita == NULL){
//                     temp->noDireita = noNovo;
//                     temp = noNovo->noDireita->noDireita;
//                 } 
//                 else{
//                     temp = temp->noDireita;
//                 }
//             }
//             if(aluno.obterRegistro()  <  temp->aluno.obterRegistro()){
//                 if(temp->noEsquerda == NULL){
//                     temp->noEsquerda = noNovo;
//                     temp = noNovo->noEsquerda->noEsquerda;
//                 }
//                 else{
//                     temp = temp->noEsquerda;
//                 }
//             }
    
//     }
// }
// }

// // void arvoreBinaria::inserir(Aluno aluno) {
// //     no *novoRamo = new no;
// //     novoRamo->aluno = aluno;
// //     novoRamo->noDireita = NULL;
// //     novoRamo->noEsquerda = NULL;

// //     if (estaVazia()) {
// //         raiz = novoRamo;
// //     } else {
// //         no *temp = raiz;
// //         no *pai = NULL;

// //         while (temp != NULL) {
// //             pai = temp;
// //             if (aluno.obterRegistro() < temp->aluno.obterRegistro()) {
// //                 temp = temp->noEsquerda;
// //             } else {
// //                 temp = temp->noDireita;
// //             }
// //         }

// //         if (aluno.obterRegistro() < pai->aluno.obterRegistro()) {
// //             pai->noEsquerda = novoRamo;
// //         } else {
// //             pai->noDireita = novoRamo;
// //         }
// //     }
// // }






// void arvoreBinaria::remover(Aluno aluno){
//     removerBusca(aluno, raiz);
// }
// void arvoreBinaria::removerBusca(Aluno aluno, no*& noAtual){
//     if(aluno.obterRegistro() < noAtual->aluno.obterRegistro()){ 
//         removerBusca(aluno, noAtual->noEsquerda); //chama recursivamente para fazer a busca em cada no
//     }
//     else if(aluno.obterRegistro() > noAtual->aluno.obterRegistro()){ 
//         removerBusca(aluno, noAtual->noDireita); //chama recursivamente para fazer a busca em cada no
//     }
//     else{
//         deletarNo(noAtual); //now to see if the no is in case one, two or three
//     }

// } //informa o aluno q ira remover e o ponteiro para o no atual
// void arvoreBinaria::deletarNo(no *&noAtual){
//     no *temp = noAtual; // it will go be usefull case arrived in case two, so temp has gone pointer for value that'll go be deletede, when noatual point for your pointer sun
//     if(noAtual->noEsquerda == NULL && noAtual->noDireita != NULL){
//         noAtual->aluno = noAtual->noDireita->aluno;
//         delete temp;
//     }
//     else if(noAtual->noEsquerda != NULL && noAtual->noDireita == NULL){
//         noAtual->aluno = noAtual->noEsquerda->aluno;
//         delete temp;
//     }
//     else if(noAtual->noEsquerda == NULL && noAtual->noDireita == NULL){
//         delete temp;
//     }
//     else{
//         Aluno alunoSucessor; // it's a student empty, for take the next
//         obterSucessor(alunoSucessor, noAtual);
//         noAtual->aluno = alunoSucessor; //now there're two values sames, so should delete the ultimate.
//         removerBusca(alunoSucessor, noAtual->noDireita); //vai encontrar o valor que foi substituido e apagar.
//     }
// } //tem o endereco do no que sera deletado
// void arvoreBinaria::obterSucessor(Aluno &alunoSucessor, no *temp){
//     temp = temp->noDireita;
//     while(temp->noEsquerda != NULL){
//         temp = temp->noEsquerda;
//     }
//     alunoSucessor = temp->aluno;
// }
// void arvoreBinaria::buscar(Aluno &aluno, bool& busca){
//     busca = false;
//     no *temp = raiz;
//     while(temp != NULL){
        
//         if(temp->aluno.obterRegistro() > aluno.obterRegistro()){
//             temp = temp->noDireita;
//         }
//         else if(temp->aluno.obterRegistro() < aluno.obterRegistro()){
//             temp = temp->noEsquerda;
//         }
//         else{
//             cout << "registro encontrado. \nreferente a pessoa: " << temp->aluno.obterNome();
//             aluno = temp->aluno;
//             busca = true;
//             return;
//         }
        
//     }
   
// }
// // no* arvoreBinaria::casoUm(no *temp, int registro){
// //     if(temp->aluno.obterRegistro()>registro){
// //         return(temp->noDireita);
// //     }
// //     if(temp->aluno.obterRegistro()<registro){
// //         return(temp->noEsquerda);
// //     }
    
// // }


// bool arvoreBinaria::estaVazia(){
//     return(raiz == NULL);
// }

// void arvoreBinaria::imprimirOrdem(no *noAtual){
//     if (noAtual != NULL){
//     imprimirOrdem(noAtual->noEsquerda);
//     cout << "\n o nome do aluno eh: "<< noAtual->aluno.obterNome() << "\n o registro dele eh: " << noAtual->aluno.obterRegistro() << endl;
//     imprimirOrdem(noAtual->noDireita);
//     }

// }
// void arvoreBinaria::imprimirPreOrdem(no *noAtual){
//     if (noAtual != NULL){
//         cout << "\n o nome do aluno eh: "<< noAtual->aluno.obterNome() << "\n o registro dele eh: " << noAtual->aluno.obterRegistro() << endl;
//         imprimirPreOrdem(noAtual->noEsquerda);
//         imprimirPreOrdem(noAtual->noDireita);
//     }
// }
// void arvoreBinaria::imprimirPosOrdem(no *noAtual){
//     if (noAtual != NULL){
//     imprimirPosOrdem(noAtual->noEsquerda);
//     imprimirPosOrdem(noAtual->noDireita);
//     cout << "\n o nome do aluno eh: "<< noAtual->aluno.obterNome() << "\n o registro dele eh: " << noAtual->aluno.obterRegistro() << endl;
//     }

// }

