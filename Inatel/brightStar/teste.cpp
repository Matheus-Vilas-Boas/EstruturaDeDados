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

    Filme(string t,string g, int a, double av) {
        titulo = t;
        genero = g;
        ano = a;
        avaliacao = av;
    }
};

int main() {
    // Inicializa a semente dos números aleatórios
    srand(time(nullptr));

    // Cria uma lista de filmes
    vector<Filme> filmes;
    filmes.push_back(Filme("O Poderoso Chefao", "Crime/Drama", 1972, 9.2));
    filmes.push_back(Filme("A Lista de Schindler", "Drama/História", 1993, 8.9));
    filmes.push_back(Filme("Forrest Gump", "Comedia/Drama", 1994, 8.8));
    filmes.push_back(Filme("Interestelar", "Ficcao cientifica", 2014, 8.6));
    filmes.push_back(Filme("Coringa", "Crime/Drama", 2019, 8.5));
    filmes.push_back(Filme("A Origem", "Acao/Ficção cientifica", 2010, 8.3));
    filmes.push_back(Filme("A Viagem de Chihiro", "Animacao/Fantasia", 2001, 8.2));
    filmes.push_back(Filme("Parasita", "Comedia/Drama", 2019, 8.1));
    filmes.push_back(Filme("O Iluminado", "Terror", 1980, 8.1));
    filmes.push_back(Filme("2001 Uma Odisseia no Espaco", "Ficcao cientifica", 1968, 8.0));

    // Escolhe um filme aleatório da lista
    int index = rand() % filmes.size();
    Filme filme_recomendado = filmes[index];

    // Mostra o filme recomendado ao usuário
    cout << "Recomendamos o filme \"" << filme_recomendado.titulo << "\" (" << filme_recomendado.ano << ") do genero " << filme_recomendado.genero << "." << endl;
    cout << "A avaliacao do filme  " << filme_recomendado.avaliacao << " de 10." << endl;

    return 0;
}
