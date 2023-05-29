#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int main()
{
    char nomearq[100];
    ofstream arq; //handle para escrever arquivos
    char nomeFilme[100];
    int ano;
    strcpy(nomearq, "arquivos.txt");

    //-------------INPUT----------------

    cin.get(nomeFilme, 100);
    cin >> ano;
    //Abrindo arquivo
    arq.open(nomearq, ofstream::out);

    //Gravando dados
    arq << nomeFilme << " " << ano << endl;
    arq << ano << endl;
    //fechando arquivo
    arq.close();
    return 0;
}