#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //Lendo o nome do arquivo
    string nomeArquivo;
    getline(cin, nomeArquivo);

    ifstream arquivo(nomeArquivo);
    //Abrindo arquivo e lendo conteudo

    if (arquivo.is_open()) {
        string linha;
        while (getline(arquivo, linha)) {
            cout << linha << '\n';
        }
        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo.\n";
    }

    return 0;
}
// v 1.0.0