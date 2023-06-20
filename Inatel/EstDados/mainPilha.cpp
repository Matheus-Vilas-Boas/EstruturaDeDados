/*ESTRUTURA DE DADOS: PILHA*/

/*
    LIFO: Last in, first out;
    usado em pilhas de daoos, usado em navegadores, sites, aplicativos
*/

#include <iostream>
#include "pilha.h"
#include <windows.h>

using namespace std;

int main()
{
    pilha Pilha1;
    TipoItem item;
    int opcao;
    cout << "PROGRAMA GERADOR DE PILHAS \n" ;

    do
    {
        cout << "Digite 0 para finalizar o programa \n" ;
        cout << "Digite 1 para adicionar um novo elemento \n" ;
        cout << "Digite 2 para remover um elemento \n" ;
        cout << "Digite 3 para imprimir a pilha \n" ;
        cin >> opcao;

        if (opcao == 1)
        {
            cout << "Digite um novo elemento\n" ;
            cin >> item;
            Pilha1.empilhar(item);
        }
        else if (opcao == 2)
        {
            cout << "Remover elemento\n" ;
            item = Pilha1.desempilhar();
        }
        else if (opcao == 3)
        {
            cout << "\n Pilha:\n";
            Pilha1.imprimirPilha();
        }
        else
        {
            cout << "Valor incorreto\n";
        }
        
    } while (opcao != 0);
    

    return 0;
}