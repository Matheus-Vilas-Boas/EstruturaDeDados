#include <iostream>
#include <string>

using namespace std;

string detVenc(string jogadaA, string jogadaB) {
    if (jogadaA == jogadaB) {
        return "Empate";
    } else if (jogadaA == "pedra" && jogadaB == "tesoura") {
        return "Jogador A";
    } else if (jogadaA == "tesoura" && jogadaB == "papel") {
        return "Jogador A";
    } else if (jogadaA == "papel" && jogadaB == "pedra") {
        return "Jogador A";
    } else {
        return "Jogador B";
    }
}

int main() {
    int numCasos;
    cin >> numCasos;

    for (int i = 0; i < numCasos; i++) {
        string jogadaA, jogadaB;
        cin >> jogadaA >> jogadaB;

        string vencedor = detVenc(jogadaA, jogadaB);
        cout << vencedor << endl;
    }

    return 0;
}
