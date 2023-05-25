#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> tempos;
    double tempo;

    // Leitura dos tempos dos corredores
    while (true) {
        cin >> tempo;
        if (tempo == -1)
            break;
        
        tempos.push_back(tempo);
    }

    // Mostrar a classificação geral
    cout << "Classificação:\n";
    for (int i = 0; i < tempos.size(); i++) {
        int posicao = 0;
        for (int j = 0; j < tempos.size(); j++) {
            if (tempos[j] < tempos[i])
                posicao++;
        }
        cout << posicao << endl;
    }

    return 0;
}
