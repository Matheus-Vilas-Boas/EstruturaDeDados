#include <iostream>
#include <cstring>

using namespace std;

struct Filme {
    char nome[100];
    int ano;
};

int main() {
    int n; // número de filmes catalogados

    cin >> n;

    Filme* filmes = new Filme[n];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cin.getline(filmes[i].nome, 100);
        cin >> filmes[i].ano;
    }

    for (int i = 0; i < n; i++) {
        cout << "Nome do filme: " << filmes[i].nome << endl;
        cout << "Ano: " << filmes[i].ano << endl;
    }

    delete[] filmes;

    return 0;
}
// v1.0.1
//~A.K.Y~