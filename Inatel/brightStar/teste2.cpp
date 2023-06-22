#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Filme {
    string nome;
    string categoria;
    float avaliacao;
};

void pesquisaAcessaFilme(const string& arquivo, const string& titulo) {
    ifstream file(arquivo);

    if (!file.is_open()) {
        cout << "Erro ao abrir o arquivo.\n";
        return;
    }

    string linha;
    bool filmeEncontrado = false;

    while (getline(file, linha)) {
        Filme filme;
        size_t pos = linha.find(';');

        if (pos != string::npos) {
            filme.nome = linha.substr(0, pos);
            linha.erase(0, pos + 1);
            pos = linha.find(';');
            filme.categoria = linha.substr(0, pos);
            linha.erase(0, pos + 1);
            filme.avaliacao = stof(linha);

            if (filme.nome == titulo) {
                cout << "Filme encontrado:\n";
                cout << "Título: " << filme.nome << endl;
                cout << "Categoria: " << filme.categoria << endl;
                cout << "Avaliação: " << filme.avaliacao << endl;
                filmeEncontrado = true;
                break;
            }
        }
    }

    if (!filmeEncontrado) {
        cout << "Filme não encontrado!\n";
    }

    file.close();
}

int main() {
    string arquivo = "filmes.txt";
    string titulo;

    cout << "Digite o título do filme que deseja pesquisar: ";
    getline(cin, titulo);

    pesquisaAcessaFilme(arquivo, titulo);

    return 0;
}
