// #include <iostream>
// #include "main1.h"

// using namespace std;

// int main(){
//      arvoreBinaria arvore;
//     cout << "------Arvore de busca----\n";
//     int opcao;
//     string nome;
//     int registro;
//     do{
//     cout << "Escolha a opcao:\n 1: inserir \n 2 mostrar elemento\n 3: buscar aluno (informe o registro)\n 4: remover aluno (informe o registro)\n 0: sair do programa" << endl;
//     cin >> opcao;
//     if(opcao == 1){
//         cout << "\ninforme as informacoes do aluno:\n nome: ";
//         cin >> nome;
//         cout << "\n registro: ";
//         cin >> registro;
//         arvore.inserir(Aluno(nome, registro));
//     }
//     if(opcao == 2){
//         arvore.imprimir();        
//     }
//     if(opcao == 3){
//         cout << "\ninforme o registro para buscar: ";
//         cin >> registro;
//         arvore.buscarFolha(Aluno(" ", registro));

//     }
//     if(opcao == 4){
//         cout << "\ninforme o registro para excluir: ";
//         cin >> registro;
//         arvore.removerAluno(Aluno(" ", registro));
//     }
//     if(opcao == 0){
//         cout <<"\n FOI UM PRAZER ";

//     }

//     }while(opcao != 0);
//     return 0;
// }