#include <iostream>

using namespace std;

const int N = 3;

bool isMasculino(int qrCode[N][N]) {
    return qrCode[0][0] == 1 && qrCode[0][1] == 1 && qrCode[0][2] == 1;
}

bool isFeminino(int qrCode[N][N]) {
    return qrCode[1][0] == 1 && qrCode[1][1] == 1 && qrCode[1][2] == 0;
}

int main() {
    int qrCode[N][N];

    cout << "Digite o QR code (9 inteiros separados por espaço):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> qrCode[i][j];
        }
    }

    if (isMasculino(qrCode)) {
        cout << "MASCULINO" << endl;
    } else if (isFeminino(qrCode)) {
        cout << "FEMININO" << endl;
    } else {
        cout << "QR code inválido" << endl;
    }

    return 0;
}
