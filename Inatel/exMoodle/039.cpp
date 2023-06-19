#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> zero = {
    {0, 0, 0},
    {1, 1, 1},
    {1, 1, 1},
    {1, 1, 1},
    {0, 0, 0}
};

vector<vector<int>> um = {
    {1, 1, 0},
    {1, 1, 0},
    {1, 1, 0},
    {1, 1, 0},
    {1, 1, 0}
};

vector<vector<int>> dois = {
    {0, 0, 0},
    {1, 1, 0},
    {0, 0, 0},
    {0, 1, 1},
    {0, 0, 0}
};

vector<vector<int>> tres = {
    {0, 0, 0},
    {1, 1, 0},
    {0, 0, 0},
    {1, 1, 0},
    {0, 0, 0}
};

vector<vector<int>> quatro = {
    {0, 1, 0},
    {0, 1, 0},
    {0, 0, 0},
    {1, 1, 0},
    {1, 1, 0}
};

vector<vector<int>> cinco = {
    {0, 0, 0},
    {0, 1, 1},
    {0, 0, 0},
    {1, 1, 0},
    {0, 0, 0}
};

vector<vector<int>> seis = {
    {0, 0, 0},
    {0, 1, 1},
    {0, 0, 0},
    {0, 1, 0},
    {0, 0, 0}
};

vector<vector<int>> sete = {
    {0, 0, 0},
    {1, 1, 0},
    {1, 1, 0},
    {1, 1, 0},
    {1, 1, 0}
};

vector<vector<int>> oito = {
    {0, 0, 0},
    {0, 1, 0},
    {0, 0, 0},
    {0, 1, 0},
    {0, 0, 0}
};

vector<vector<int>> nove = {
    {0, 0, 0},
    {0, 1, 0},
    {0, 0, 0},
    {1, 1, 0},
    {1, 1, 0}
};

int main() {
    int imagem[5][3];
    while (true) {
        // Ler a imagem da entrada
        vector<vector<int>> imagem(5, vector<int>(3));
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> imagem[i][j];
            }
        }

        // Verificar se a imagem é uma matriz de zeros, indicando o fim da entrada
        bool fimDaEntrada = true;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                if (imagem[i][j] != 0) {
                    fimDaEntrada = false;
                    break;
                }
            }
            if (!fimDaEntrada) {
                break;
            }
        }

        if (fimDaEntrada) {
            break;
        }

        // Comparar a imagem com cada dígito
        if (imagem == um) {
            cout << "UM" << endl;
        } else if (imagem == dois) {
            cout << "DOIS" << endl;
        } else if (imagem == tres) {
            cout << "TRES" << endl;
        } else if (imagem == quatro) {
            cout << "QUATRO" << endl;
        } else if (imagem == cinco) {
            cout << "CINCO" << endl;
        } else if (imagem == seis) {
            cout << "SEIS" << endl;
        } else if (imagem == sete) {
            cout << "SETE" << endl;
        } else if (imagem == oito) {
            cout << "OITO" << endl;
        } else if (imagem == nove) {
            cout << "NOVE" << endl;
        } else {
           cout << "ZERO" << endl;
        }
    }
    return 0;
}
//SANTO CÓDIGO 