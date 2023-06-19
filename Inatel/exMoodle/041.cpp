#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Função para calcular o determinante de uma matriz 2x2
double calcularDeterminante(const vector<vector<double>>& matriz) {
    return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
}

// Função para calcular a matriz transposta de uma matriz 2x2
vector<vector<double>> calcularTransposta(const vector<vector<double>>& matriz) {
    vector<vector<double>> transposta(2, vector<double>(2));

    transposta[0][0] = matriz[0][0];
    transposta[0][1] = matriz[1][0];
    transposta[1][0] = matriz[0][1];
    transposta[1][1] = matriz[1][1];

    return transposta;
}

// Função para calcular a matriz inversa de uma matriz 2x2
vector<vector<double>> calcularMatrizInversa(const vector<vector<double>>& matriz) {
    double determinante = calcularDeterminante(matriz);

    if (determinante == 0.0) {
        cout << "A matriz não possui inversa." << endl;
        exit(0);
    }

    vector<vector<double>> inversa(2, vector<double>(2));

    inversa[0][0] = matriz[1][1] / determinante;
    inversa[0][1] = -matriz[0][1] / determinante;
    inversa[1][0] = -matriz[1][0] / determinante;
    inversa[1][1] = matriz[0][0] / determinante;

    return inversa;
}

int main() {
    vector<vector<double>> matriz(2, vector<double>(2));

    // Ler os 4 números reais e armazená-los por linhas na matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matriz[i][j];
        }
    }

    // Calcular o determinante
    double determinante = calcularDeterminante(matriz);

    // Calcular a matriz transposta
    vector<vector<double>> transposta = calcularTransposta(matriz);

    // Calcular a matriz inversa
    vector<vector<double>> inversa = calcularMatrizInversa(matriz);

    // Imprimir a matriz original
    cout << "M = [";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << fixed << setprecision(4) << matriz[i][j];
            if (j != 1) {
                cout << " ";
            }
        }
        if (i != 1) {
            cout << " ; ";
        }
    }
    cout << "]" << endl;

    // Imprimir o determinante
    cout << "Determinante de M = " << fixed << setprecision(4) << determinante << endl;

    // Imprimir a matriz transposta
    cout << "Transposta de M = [";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << fixed << setprecision(4) << transposta[i][j];
            if (j != 1) {
                cout << " ";
            }
        }
        if (i != 1) {
            cout << " ; ";
        }
    }
    cout << "]" << endl;

    
    return 0;
}
