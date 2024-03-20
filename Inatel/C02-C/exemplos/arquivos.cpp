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
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main() 
{

    cout << fixed << setprecision(2);

    string nome_arquivo_saida;
    cin >> nome_arquivo_saida;
    
    ofstream arquivo(nome_arquivo_saida);

    float numero;
    cin >> numero;
    while (numero != 0) 
    {
        arquivo << fixed << setprecision(2) << numero << " ";
        cin >> numero;
    }

    arquivo.close();

    ifstream arquivo_leitura(nome_arquivo_saida);
    if (arquivo_leitura.is_open()) 
    {
        float numero_lido;
        while (arquivo_leitura >> numero_lido) 
        {
            cout << numero_lido << " ";
        }
        arquivo_leitura.close();
    } 
    else 
    {
        cout << "Erro ao abrir o arquivo." << std::endl;
    }

    return 0;
}
