#include <iostream>

using namespace std;

int sinal(int n) {
    if (n > 0) {
        return 1; // Positivo
    } else if (n < 0) {
        return -1; // Negativo
    } else {
        return 0; // Zero
    }
}

int main() {
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    int resultado = sinal(numero);

    if (resultado == 1) {
        cout << "Positivo\n";
    } else if (resultado == -1) {
        cout << "Negativo\n";
    } else {
        cout << "Zero\n";
    }

    return 0;
}
