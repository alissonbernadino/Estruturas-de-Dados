// #include <iostream>
// using namespace std;

// class Aluno{
//     private:
//     string nome;
//     int registro;

//     public:
//     Aluno(){
//         nome = " ";
//         registro = -1;
//     }
//     Aluno(string n, int r){
//         nome = n;
//         registro = r;
//     }
//     string obterNome(){
//         return(nome);
//     }
//     int obterRegistro(){
//         return(registro);
//     }
// };

// struct no{
//     Aluno aluno;
//     no *folhaDireita = nullptr;
//     no *folhaEsquerda = nullptr;
// };

// class arvoreBinaria{
//     private:
//     no *raiz;

//     public:
//     arvoreBinaria(){
//         raiz = nullptr;
//     }
//     ~arvoreBinaria(){
//         deletarArvore(raiz);
//     }
//     void deletarArvore(no *noatual){
//         if(noatual != nullptr){
//         deletarArvore(noatual->folhaEsquerda);
//         deletarArvore(noatual->folhaDireita);
//         delete noatual;
//         }

//     }
//     void inserir(Aluno alunoInserir){
//         if(seVazia()){
//             no *novoNo = new no;
//             novoNo->aluno = alunoInserir; 
//             raiz = novoNo;
//         }else{
//             no *temp = raiz;
//             no *adicionar = new no;
//             adicionar->aluno = alunoInserir;
//             while(temp != nullptr){
//                 if(alunoInserir.obterRegistro() < temp->aluno.obterRegistro()){
//                     if(temp->folhaEsquerda == nullptr){
//                         temp->folhaEsquerda = adicionar;
//                     }
//                     else{
//                         temp = temp->folhaEsquerda;
//                     }
//                 }
//                 else if(alunoInserir.obterRegistro() > temp->aluno.obterRegistro()){
//                     if(temp->folhaDireita == nullptr){
//                         temp->folhaDireita = adicionar;
//                     }
//                     else{
//                         temp = temp->folhaDireita;
//                     }
//                 }
//                 else{
//                     cout << "\n este aluno ja foi inserido"<<endl;
//                     return;
//                 }
//             }
//         }
//     }
//     bool seVazia(){
//         return(raiz == nullptr);
//     }
//     void imprimir(){
//         darRaiz(raiz);
//     }
//     void darRaiz(no *noatual){
//         if(noatual != nullptr){
//             cout << "\n nome: " << noatual->aluno.obterNome() << "  registro: " << noatual->aluno.obterRegistro() << endl;
//             darRaiz(noatual->folhaEsquerda);
//             darRaiz(noatual->folhaDireita);
//         }

//     }

//     void buscarFolha(Aluno alunoEncontra){
//         no *temp = raiz;
//         bool encontrou = false;
//         while(temp != nullptr && encontrou != true){
//             if(alunoEncontra.obterRegistro() < temp->aluno.obterRegistro()){
//                 temp = temp->folhaEsquerda;
//             }else if(alunoEncontra.obterRegistro() > temp->aluno.obterRegistro()){
//                 temp = temp->folhaDireita;
//             }else{
//                 cout << "Aluno encontrado: " << temp->aluno.obterNome() << "registro: " << temp->aluno.obterRegistro()<<endl;
//                 encontrou = true;
//             }
//             if(temp == nullptr){
//                 cout << "Aluno nao inserido \n";
//             }
//         }

//     }
//     void removerAluno(Aluno aluno){
//         removerFolha(aluno, raiz);
//     }

//     void removerFolha(Aluno alunoRemover, no *&noAtual){
//         if(noAtual == nullptr){
//             cout << "este no não existe! \n";
//             return;
//         }
//         if(alunoRemover.obterRegistro() < noAtual->aluno.obterRegistro()){
//             noAtual = noAtual->folhaEsquerda;
//             removerFolha(alunoRemover, noAtual);
//         }
//         else if(alunoRemover.obterRegistro() > noAtual->aluno.obterRegistro()){
//             noAtual = noAtual->folhaDireita;
//             removerFolha(alunoRemover, noAtual);
//         } else{
//             deletarNo(noAtual);
//         }

//     }

//     void deletarNo(no *&noAtual){
//         no *temp = noAtual;
//         if(noAtual->folhaDireita == nullptr && noAtual->folhaEsquerda == nullptr ){
//             delete noAtual;
//         }else if(noAtual->folhaDireita != nullptr && noAtual->folhaEsquerda == nullptr){
//             noAtual = noAtual->folhaDireita;
//             delete temp;
//         }
//         else if(noAtual->folhaDireita == nullptr && noAtual->folhaEsquerda != nullptr){
//             noAtual = noAtual->folhaEsquerda;
//             delete temp;
//         }else{
//             temp = temp->folhaDireita;
//             bool parada = false;
//             while(temp != nullptr && parada == false){
//                 if(temp->folhaEsquerda == nullptr){
//                     noAtual->aluno = temp->aluno;
//                     parada = true;
                    
//                 }else{
//                 temp = temp->folhaEsquerda;
//                 }
//             }
//             deletarNo(temp);
//         }
//     }

// };

