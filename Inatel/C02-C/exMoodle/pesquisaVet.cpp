#include <iostream>

using namespace std;

int main()
{

    int vetNum[100];
    int tamanho = 0;

    //Lendo valores e armazenando

    int num;
    cin >> num;

    while (num != -1)
    {
        vetNum[tamanho++] = num;
        cin >> num;
    }

    //Lendo valores e fazendo a busca

    int x;
    cin >> x;
    int posi = -1;

    for (int i = 0; i < tamanho; i++)
    {
        if (vetNum[i] == x)
        {
            posi = i;
            break;
        }   
    }
    
    //Saída

    if (posi != -1)
    {
        cout << x << " encontrado na posicao " << posi << endl;
    }
    else
    {
        cout << x << " nao encotrado" << endl;
    } 

    return 0;
}