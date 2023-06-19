#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    //Criando um arquivo 
    string nomeArquivo;
    getline(cin, nomeArquivo);

    //Condição de existência de um arquivo
    ofstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        cout << "Erro ao criar o arquivo.\n";
        return 1;
    }

    //lendo numeros diferente de 0
    double numero;
    while (cin >> numero && numero != 0) {
        arquivo << numero << " ";
    }

    arquivo.close();

    
    ifstream arquivoLido(nomeArquivo);
    if (!arquivoLido.is_open()) {
        cout << "Erro ao abrir o arquivo.\n";
        return 1;
    }

    vector<double> numerosLidos;
    while (arquivoLido >> numero) {
        numerosLidos.push_back(numero);
    }

    arquivoLido.close();
    //Mostrando o arquivo

    for (double num : numerosLidos) {
        cout << num << " ";
    }
    cout << std::endl;

    return 0;
}
// v 1.0.0
