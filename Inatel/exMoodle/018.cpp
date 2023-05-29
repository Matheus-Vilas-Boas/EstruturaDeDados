#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Stormtrooper {
    int id;
    double im;
    double fa;
};

int main() {
    vector<Stormtrooper> stormtroopers;

    // Leitura dos dados dos Stormtroopers
    while (true) {
        int id;
        double im, fa;
        cin >> id;

        if (id == 0) {
            break;
        }

        cin >> im >> fa;

        Stormtrooper stormtrooper;
        stormtrooper.id = id;
        stormtrooper.im = im;
        stormtrooper.fa = fa;

        stormtroopers.push_back(stormtrooper);
    }

    // Encontrar o Stormtrooper mais apto
    int idMaisApto;
    double grauAptidaoMaisApto = 0.0;

    for (const Stormtrooper& stormtrooper : stormtroopers) {
        double grauAptidao = (stormtrooper.im + stormtrooper.fa) / 2;

        if (grauAptidao > grauAptidaoMaisApto) {
            idMaisApto = stormtrooper.id;
            grauAptidaoMaisApto = grauAptidao;
        }
    }

    // Exibição do Stormtrooper mais apto
    cout << "Stormtrooper escolhido: "<< idMaisApto << endl;
    cout << "GA = " << grauAptidaoMaisApto << endl;

    return 0;
}
