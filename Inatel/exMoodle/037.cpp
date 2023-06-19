#include <iostream>
#include <string>

using namespace std;

const int MAX_N = 100;
const int MAX_M = 100;

void decifrarMensagem(int n, int m, const string& mensagem, char matriz[MAX_N][MAX_M]) {
    int linhas = mensagem.length() / m;
    int pos = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = mensagem[pos++];
        }
    }
}

void exibirMensagemDecifrada(int n, int m, const char matriz[MAX_N][MAX_M]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j];
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    string mensagem;
    char matriz[MAX_N][MAX_M];

    cin >> n >> m;
    cin.ignore();

    getline(cin, mensagem);

    decifrarMensagem(n, m, mensagem, matriz);
    exibirMensagemDecifrada(n, m, matriz);

    return 0;
}
