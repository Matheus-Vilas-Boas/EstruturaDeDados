#include <iostream>
#include <vector>
#include <cstdlib> // para gerar números aleatórios
#include <ctime> // para inicializar a semente dos números aleatórios

using namespace std;

// Classe que representa um filme
class Filme {
public:
    string titulo;
    string genero;
    int ano;
    double avaliacao;

    Filme(string t, string g, int a, double av) {
        titulo = t;
        genero = g;
        ano = a;
        avaliacao = av;
    }
};

int main() {
    // Inicializa a semente dos números aleatórios
    srand(time(NULL));

    // Cria uma lista de filmes
    vector<Filme> filmes;
    filmes.push_back(Filme("O Poderoso Chefão", "Crime/Drama", 1972, 9.2));
    filmes.push_back(Filme("A Lista de Schindler", "Drama/História", 1993, 8.9));
    filmes.push_back(Filme("Forrest Gump", "Comédia/Drama", 1994, 8.8));
    filmes.push_back(Filme("Interestelar", "Ficção científica", 2014, 8.6));
    filmes.push_back(Filme("Coringa", "Crime/Drama", 2019, 8.5));
    filmes.push_back(Filme("A Origem", "Ação/Ficção científica", 2010, 8.3));
    filmes.push_back(Filme("A Viagem de Chihiro", "Animação/Fantasia", 2001, 8.2));
    filmes.push_back(Filme("Parasita", "Comédia/Drama", 2019, 8.1));
    filmes.push_back(Filme("O Iluminado", "Terror", 1980, 8.1));
    filmes.push_back(Filme("2001: Uma Odisseia no Espaço", "Ficção científica", 1968, 8.0));

    // Pede ao usuário para inserir um gênero de filme
    string genero;
    cout << "Insira um gênero de filme: ";
    getline(cin, genero);

    // Cria um vetor de filmes que correspondem ao gênero inserido pelo usuário
    vector<Filme> filmes_do_genero;
    for (Filme filme : filmes) {
        if (filme.genero == genero) {
            filmes_do_genero.push_back(filme);
        }
    }

    // Verifica se há filmes do gênero inserido pelo usuário
    if (filmes_do_genero.size() == 0) {
        cout << "Não há filmes desse gênero em nossa lista." << endl;
        return 0;
    }

    // Escolhe um filme aleatório da lista de filmes do gênero inserido pelo usuário
    int index = rand() % filmes_do_genero.size();
    Filme filme_recomendado = filmes_do_genero[index];

    // Mostra o filme recomendado ao usuário
    cout << "Recomendamos o filme \"" << filme_recomendado.titulo << "\" (" << filme_recomendado.ano << ") do gênero";
    return 0;
}