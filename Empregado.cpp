#include <iostream>
#include <locale.h>
#include <stdlib.h>   
#include <conio.h>
#include <cstdio> 

using namespace std;

struct Empregado
{
    char nome[20];
    int idade, quantidadeFilhos;
    float salario;
    struct Empregado *proximo; 
};


int main (){

    setlocale(LC_ALL, "portuguese");
    system("color 1F");

    struct Empregado *primeiroNo = NULL;
    
    struct Empregado* inserirNoFinal(struct Empregado*);
    struct Empregado* inserirNoInicio(struct Empregado*);
    struct Empregado* removerNoInicio(struct Empregado*);
    struct Empregado *removerNoFinal(struct Empregado*);
    // struct Empregado *removerMenorSalario(struct Empregado*);
    // struct Empregado *menorIdadeInfomada(struct Empregado*);
    void imprimirLista(struct Empregado*);

    int num = 0;

    while (num != '8'){

        system("CLS");
        
        cout << "\nDigite a op��o desejada:\n\n";
        cout << "\t1 - Inserir um n� no in�cio\n";
        cout << "\t2 - Inserir um n� no final\n";
        cout << "\t3 - Remover n� do in�cio\n";
        cout << "\t4 - Remover n� do final\n";
        cout << "\t5 - Mostrar informa��es dos funcion�rios com idade abaixo da idade informada\n";
        cout << "\t6 - Procurar o menor sal�rio e remover o n� encontrado\n";
        cout << "\t7 - Imprimir Lista\n";
        cout << "\t8 - Sair\n";

        num = getch();

        switch (num)
        {
            case '1':
                system("CLS"); 
                cout << "\n1 - Inserir um n� no in�cio:\n";
                primeiroNo = inserirNoInicio(primeiroNo);
                getch();
                break;

            case '2':
                system("CLS"); 
                cout << "\n2 - Inserir um n� no final:\n";
                primeiroNo = inserirNoFinal(primeiroNo);
                break;

            case '3':
                system("CLS");
                cout << "\n3 - Remover n� do in�cio:\n";
                primeiroNo = removerNoInicio(primeiroNo);
                getch();
                break;
        
            case '4':
                system("CLS");
                cout << "\n4 - Remover n� do final:\n";
                primeiroNo = removerNoFinal(primeiroNo);
                getch();
                break;

            case '5':
                system("CLS");
                cout << "\n5 - Mostrar informa��es dos funcion�rios com idade abaixo da idade informada:\n";
                //primeiroNo = menorIdadeInfomada(primeiroNo);
                getch();
                break;

            case '6':
                system("CLS");
                cout << "\n6 - Procurar o menor sal�rio e remover o n� encontrado:\n";
               // primeiroNo = removerMenorSalario(primeiroNo);
                getch();
                break;

            case '7':
                system("CLS"); 
                cout << "7 - Imprimir Lista:\n";
                imprimirLista(primeiroNo);
                getch();
                break;

            case '8':
                system("CLS");
                cout << "\n\t\tSaindo...\n";
                system("PAUSE");
                break;
            default:
                system("CLS");
                cout << "\nOp��o inv�lida !!!";
                getch();
                break;
        }
    } 
}

#pragma region //Fun��es 
    struct Empregado* inserirNoInicio(struct Empregado *lista){

        struct Empregado* lerInformacaoes(struct Empregado*);

        struct Empregado *novoNo = (struct Empregado*) malloc(sizeof(struct Empregado));

        novoNo = lerInformacaoes(novoNo);
         if (lista != NULL){
            
            novoNo->proximo = lista;

            return novoNo;
        }                 
        else{
            return novoNo;
        }
    }

    struct Empregado* inserirNoFinal(struct Empregado *lista){
        
        struct Empregado* lerInformacaoes(struct Empregado*);

        struct Empregado *primeiroNo = lista;
        struct Empregado *novoNo = (struct Empregado*) malloc(sizeof(struct Empregado));

        novoNo = lerInformacaoes(novoNo);

        if (lista != NULL){

            while (lista->proximo != NULL)
            {
                lista = lista->proximo;
            }  

            lista->proximo = novoNo;
            return primeiroNo;
        }                 
        else{
            return novoNo;
        }
    }

    struct Empregado* removerNoInicio(struct Empregado *lista){
        if (lista == NULL)
        {
            cout << "\tLista vazia!";
        }
        else
        {
            lista = lista->proximo;
            cout << "\tValor removido !";
        }

        return lista;
    }

    struct Empregado* removerNoFinal(struct Empregado *lista){

        if (lista == NULL)
        {
            cout << "\tLista vazia!";
            return lista;
        }
        if (lista->proximo == NULL)
        {
            lista = NULL;
            cout << "\tValor removido !";
            return lista;
        }

        while (lista->proximo->proximo != NULL)
        {
            lista = lista->proximo;
        }

        lista->proximo = NULL;
        cout << "\tValor removido !";

        return lista;
    }

    // struct Empregado* menorIdadeInfomada(struct Empregado *lista){
    //     return;
       
    // }

    // struct Empregado* removerMenorSalario(struct Empregado *lista){
    //     return;
    // }

    void imprimirLista(struct Empregado *primeiroNo){
        
        if (primeiroNo == NULL)
        {
            cout << "\tLista vazia!";
            return;
        }
        

        while (primeiroNo != NULL)
        {

            cout << "\tNome do colaborador: " << primeiroNo->nome << "\n";
            cout << "\tIdade do colaborador: " << primeiroNo->idade << "\n";
            cout << "\tQuantidade de filhos: " << primeiroNo->quantidadeFilhos << "\n";
            cout << "\tSal�rio R$: " << primeiroNo->salario << "\n\n";
            primeiroNo = primeiroNo->proximo;

        }
    }

    struct Empregado* lerInformacaoes(struct Empregado *novoNo){
            
        cout << "\tInforme o nome do colaborador: ";
        cin >> novoNo->nome;
        cout << "\tInforme a idade do colaborador: ";
        cin >> novoNo->idade;
        cout << "\tInforme a quantidade de filhos: ";
        cin >> novoNo->quantidadeFilhos;
        cout << "\tInforme o sal�rio R$: ";
        cin >> novoNo->salario;
        cout << "\n";
        novoNo->proximo = NULL;

        return novoNo;
    }
#pragma endregion
