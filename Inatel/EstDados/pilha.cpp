#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha()
{
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
}

pilha::~pilha()
{
    delete[] estrutura;
}

bool pilha::estaCheia()
{
    return (tamanho == max_itens);
}

bool pilha::estaVazia()
{
    return (tamanho == 0);
}

void pilha::empilhar(TipoItem item)
{
    if (estaCheia())
    {
        cout << "ESTA CHEIA\n";
    }
    else
    {
        estrutura[tamanho] = item;
        tamanho++;
    }
}

TipoItem pilha::desempilhar()
{
    if (estaVazia())
    {
        cout << "ESTA VAZIO\n";
        return 0;
    }
    else
    {
        tamanho--;
        return estrutura[tamanho];
    }
}

void pilha::imprimirPilha()
{
    cout << "Pilha [ ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << estrutura[i] << " ";
    }
    cout << " ]" << endl;
}

int pilha::getTamanho()
{
    return tamanho;
}
