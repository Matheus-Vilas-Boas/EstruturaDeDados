#include <iostream>
using namespace std;

void lendoId(int id[], int tam)
{
    int tamanho = 0;

    int key;
    cin >> key;

    while (key != -1)
    {
        id[tamanho++] = key;
        cin >> key;
    }
}

int busca_binaria_Id(int id[], int busca, int tamanho) 
{
    bool encontrou;
    int baixo, meio, alto;

    baixo = 0;                    // 1
    alto = tamanho - 1;           // 3

    encontrou = false;            // 1

    while ((baixo <= alto) && (encontrou == false))       // 6 log(n)
    {
        meio = (baixo + alto) /2;                         // 5
        if (busca < id[meio])       // 4 log(n)
        {
            alto = meio - 1;                              // 3
        }
        else
        {
            if (busca > id[meio])   // 4 log(n)
            {
                alto = meio + 1;                         // 3
            }
            else
            {
                encontrou = true;                        // 1
            }
        }
    }
    if (encontrou)
    {
        return meio;                                     // 0
    }
    else
    {
        return -1;                                       // 0
    }
}              

int main()
{
    const int MAX_SIZE = 20;
    int ids[MAX_SIZE];

    // Lendo IDs autorizados
    
    lendoId(ids, MAX_SIZE);

    // Lendo e identificando ID
    int busca;
   
    cin >> busca;

    int posicao = busca_binaria_Id(ids, busca, MAX_SIZE);

    // Saída
    if (posicao != -1) 
    {
        cout << "Possui acesso" << endl;
    } 
    else 
    {
        cout << "Nao possui acesso" << endl;
    }

    return 0;
}
