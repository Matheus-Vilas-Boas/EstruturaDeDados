#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Padawan {
    string nome;
    int pontos;
};

int main() {
    int N;
    cin >> N;

    vector<Padawan> padawans(N);

    // Leitura dos dados dos Padawans
    for (int i = 0; i < N; i++) {
        cin.ignore();
        getline(cin, padawans[i].nome);
        cin >> padawans[i].pontos;
    }

    // Encontrar o Padawan com mais pontos
    int maiorPontuacao = 0;
    string nomePadawanMaisPontos;

    for (const Padawan& padawan : padawans) {
        if (padawan.pontos > maiorPontuacao) {
            maiorPontuacao = padawan.pontos;
            nomePadawanMaisPontos = padawan.nome;
        }
    }

    // Calcular a média da pontuação da turma
    int totalPontos = 0;

    for (const Padawan& padawan : padawans) {
        totalPontos += padawan.pontos;
    }

    double mediaTurma = static_cast<double>(totalPontos) / N;

    // Exibição do Padawan com mais pontos e média da turma
    cout << "Padawan com mais pontos: " << nomePadawanMaisPontos << endl;
    cout << "Pontos: " << maiorPontuacao << endl;
    cout << "Media da turma: " << fixed << setprecision(2) << mediaTurma << " pontos" << endl;

    return 0;
}
