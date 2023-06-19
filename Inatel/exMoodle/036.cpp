#include <iostream>

using namespace std;

const int MAX_N = 10;
const int MAX_M = 10;

void somarMatrizes(int mat1[MAX_N][MAX_M], int mat2[MAX_N][MAX_M], int mat3[MAX_N][MAX_M], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void mostrarMatriz(int matriz[MAX_N][MAX_M], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << std::endl;
    }
}

int main() {
    int n, m;
    int mat1[MAX_N][MAX_M];
    int mat2[MAX_N][MAX_M];
    int mat3[MAX_N][MAX_M];

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat2[i][j];
        }
    }

    somarMatrizes(mat1, mat2, mat3, n, m);

    mostrarMatriz(mat3, n, m);

    return 0;
}
