#include <iostream>
#include <iomanip>

using namespace std;

float ideal(float h, char sexo) {
    float pesoIdeal;

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 72.7 * h - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = 62.1 * h - 44.7;
    } else {
        cout << "Sexo inválido. Por favor, informe 'M' para masculino ou 'F' para feminino.\n";
        return 0.0f;
    }

    return pesoIdeal;
}

int main() {
    cout << fixed << setprecision(2);
    float altura;
    char sexo;

    cin >> altura;
    cin >> sexo;

    float pesoIdeal = ideal(altura, sexo);

    if (pesoIdeal != 0.0f) {
        cout << "Peso ideal = " << pesoIdeal << " kg\n";
    }

    return 0;
}
