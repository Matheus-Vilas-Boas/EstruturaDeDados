#include <iostream>
#include <cstring>

using namespace std;

struct dados {
    char nome[100];
    int n1;
    int n2;
    int n3;
    int n4;
};

int strongest(dados atletas[], int nAtletas) {
    int posicaoVencedor = 0;
    int maiorPontuacao = atletas[0].n1 + atletas[0].n2 + atletas[0].n3 + atletas[0].n4;

    for (int i = 1; i < nAtletas; i++) {
        int pontuacaoAtual = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
        if (pontuacaoAtual > maiorPontuacao) {
            maiorPontuacao = pontuacaoAtual;
            posicaoVencedor = i;
        }
    }

    return posicaoVencedor;
}

int main() {
    int nAtletas;
    cin >> nAtletas;

    dados* atletas = new dados[nAtletas];

    for (int i = 0; i < nAtletas; i++) {
        cin.ignore();
        cin.getline(atletas[i].nome, 100);
        cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;
    }

    int posicaoVencedor = strongest(atletas, nAtletas);
    cout << "Vencedor: " << atletas[posicaoVencedor].nome << endl;

    delete[] atletas;

    return 0;
}