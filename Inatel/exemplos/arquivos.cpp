#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int arquivo()
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
int main()
{
    char nomearq[100];
    ofstream arq; //handle para escrever arquivos
    char nomeFilme[100];
    int ano;
 ;

    //-------------INPUT----------------

    cout <<"Nome do arquivo: "<< endl;
    cin.getline(nomearq, 100);

    //Abrindo arquivo para leitura
    arq.open(nomearq, ifstream::in);

    //Lendo e mostrando informações do arquivo
    cin.getline(nomeFilme, 100);
    cin >> ano;
    cout << nomeFilme << " " << ano << endl;
    cout << ano << endl;

    //fechando arquivo
    arq.close();

    return 0;
}