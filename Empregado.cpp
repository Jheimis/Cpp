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
    void imprimirLista(struct Empregado*);

    int num = 0;

    while (num != '8'){

        system("CLS");
        
        cout << ("\n");
        cout << "Digite a opção desejada:\n\n";
        cout << "\t1 - Inserir um nó no início\n";
        cout << "\t2 - Inserir um nó no final\n";
        cout << "\t3 - Remover nó do início\n";
        cout << "\t4 - Remover nó do final\n";
        cout << "\t5 - Mostrar informações dos funcionários com idade abaixo da idade informada\n";
        cout << "\t6 - Procurar o menor salário e remover o nó encontrado\n";
        cout << "\t7 - Imprimir Lista\n";
        cout << "\t8 - Sair\n";

        num = getch();

        switch (num)
        {
            case '1':
                system("CLS"); 
                cout << "\n";
                cout << "1 - Inserir um nó no início:";
                getch();
                break;

            case '2':
                primeiroNo = inserirNoFinal(primeiroNo);
                break;

            case '3':
                system("CLS");
                cout << "\n";
                cout << "3 - Remover nó do início:";
                getch();
                break;
        
            case '4':
                system("CLS");
                cout << "\n";
                cout << "4 - Remover nó do final:";
                getch();
                break;

            case '5':
                system("CLS");
                cout << "\n";
                cout << "5 - Mostrar informações dos funcionários com idade abaixo da idade informada:";
                getch();
                break;

            case '6':
                system("CLS");
                cout << "\n";
                cout << "6 - Procurar o menor salário e remover o nó encontrado:";
                getch();
                break;

            case '7':
                system("CLS"); 
                cout << "7 - Imprimir Lista:";
                imprimirLista(primeiroNo);
                getch();
                break;

            case '8':
                system("CLS");
                cout << "\n";
                cout << "\t\tSaindo...\n";
                system("PAUSE");
                break;
            default:
                system("CLS");
                cout << "\n";
                cout << "Opção inválida !!!";
                getch();
                break;
        }
    } 
}

#pragma region //Funções 
    void inserirNoInicio(){

    }
    struct Empregado* inserirNoFinal(struct Empregado *lista){
        
        system("CLS"); 

        struct Empregado *primeiroNo = lista;
        struct Empregado *novoNo = (struct Empregado*) malloc(sizeof(struct Empregado));

        struct Empregado* lerInformacaoes(struct Empregado*);

        cout << "\n2 - Inserir um nó no final:\n";
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

    void removerNoInicio(){

    }

    void removerNoFinal(){

    }

    void menorIdadeInfomada(){
       
    }

    void removerMenorSalario(){
    }

    void imprimirLista(struct Empregado *primeiroNo){
      
        while (primeiroNo != NULL)
        {

            cout << "\n\tNome do colaborador: " << primeiroNo->nome << "\n";
            cout << "\tIdade do colaborador: " << primeiroNo->idade << "\n";
            cout << "\tQuantidade de filhos: " << primeiroNo->quantidadeFilhos << "\n";
            cout << "\tSalário: " << primeiroNo->salario << "\n\n";
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
        cout << "\tInforme o salário: ";
        cin >> novoNo->salario;
        cout << "\n";
        novoNo->proximo = NULL;

        return novoNo;
    }
#pragma endregion
