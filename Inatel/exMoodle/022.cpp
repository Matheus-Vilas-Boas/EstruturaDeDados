#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << std::setprecision(1);
    // Lendo e abrindo arquivo
    string nomeArquivo;
    getline(cin, nomeArquivo);
    
    // condição de existencia do arquivo
    ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo.\n";
        return 1;
    }
    // MÉDIA DE TEMPERATURA
    double somaTemperaturas = 0.0;
    int contador = 0;
    double temperatura;
    while (arquivo >> temperatura) {
        somaTemperaturas += temperatura;
        contador++;
    }

    if (contador > 0) {
        double media = somaTemperaturas / contador;
        cout << "Temperatura media: " << media << " graus\n";
    } else {
        cout << "Nenhuma temperatura encontrada no arquivo.\n";
    }
    //FECHANDO ARQUIVO  
    arquivo.close();

    return 0;
}
// v1.0.0