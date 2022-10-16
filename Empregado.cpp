#include <iostream>
#include <locale.h>
#include <stdlib.h>   
#include <conio.h> 
#include <cstdio> 

using namespace std;

#pragma region Definição da Struct
struct Empregado
{
    char nome[20];
    int idade, quantidadeFilhos;
    float salario;
    struct Empregado *proximo; 
};
#pragma endregion

int main (){

    setlocale(LC_ALL, "portuguese");
    struct Empregado *primeiroNo = (struct Empregado*) malloc(sizeof(struct Empregado));
    void inserirNoFinal(primeiroNo);

    int num = 0;

    while (num != '7'){

        system("CLS");
        
        cout << ("\n");
        cout << ("Digite a opção desejada:\n\n");
        cout << ("\t1 - Inserir um nó no início\n");
        cout << ("\t2 - Inserir um nó no final\n");
        cout << ("\t3 - Remover nó do início\n");
        cout << ("\t4 - Remover nó do final\n");
        cout << ("\t5 - Mostrar informações dos funcionários com idade abaixo da idade informada\n");
        cout << ("\t6 - Procurar o menor salário e remover o nó encontrado\n");
        cout << ("\t7 - Sair\n");

        num = getch();

        switch (num)
        {
            case '1':
                system("CLS"); 
                cout << ("\n");
                cout << ("1 - Inserir um nó no início:");
                getch();
                break;

            case '2':
                inserirNoFinal();
                break;

            case '3':
                system("CLS");
                cout << ("\n");
                cout << ("3 - Remover nó do início:");
                getch();
                break;
        
            case '4':
                system("CLS");
                cout << ("\n");
                cout << ("4 - Remover nó do final:");
                getch();
                break;

            case '5':
                system("CLS");
                cout << ("\n");
                cout << ("5 - Mostrar informações dos funcionários com idade abaixo da idade informada:");
                getch();
                break;

            case '6':
                system("CLS");
                cout << ("\n");
                cout << ("6 - Procurar o menor salário e remover o nó encontrado:");
                getch();
                break;

            case '7':
                system("CLS");
                cout << ("\n");
                cout << ("\t\tSaindo...\n");
                system("PAUSE");
                break;
            default:
                system("CLS");
                cout << ("\n");
                cout << ("Opção inválida !!!");
                getch();
                break;
        }
    }
    
}

#pragma region Funções 
    void inserirNoInicio(){

    }
    void inserirNoFinal(struct Empregado *primeiroNo){

        system("CLS"); 
        
        cout << ("\n");
        cout << ("2 - Inserir um nó no final:\n");
        cout << ("\tInforme o nome do colaborador: ");
        cin >> primeiroNo->nome;
        cout << ("\n");
        cout << ("\tInforme a idade do colaborador: ");
        cin >> primeiroNo->idade;
        cout << ("\n");
        cout << ("\tInforme a quantidade de filhos: ");
        cin >> primeiroNo->quantidadeFilhos;
        cout << ("\n");
        cout << ("\tInforme o salário: ");
        cin >> primeiroNo->salario;
        cout << ("\n");

       cout << (primeiroNo->nome);

        getch();

    }

    void removerNoInicio(){

    }

    void removerNoFinal(){

    }

    void menorIdadeInfomada(){
       
    }

    void removerMenorSalario(){

    }
#pragma endregion