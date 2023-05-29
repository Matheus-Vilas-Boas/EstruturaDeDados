#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<string, int> cavaleiros;

    // Cadastro dos cavaleiros Jedi
    for (int i = 0; i < N; i++) {
        cin.ignore();
        string nome;
        int base;
        getline(cin, nome);
        cin >> base;
        cavaleiros[nome] = base;
    }

    // Busca pelo cavaleiro Jedi informado
    string busca;
    cin.ignore();
    getline(cin, busca);

    // Verificação da base do cavaleiro Jedi
    if (cavaleiros.count(busca) > 0) {
        int base = cavaleiros[busca];
        cout << "Este cavaleiro esta na base " << base << endl;
    } else {
        cout << "Este cavaleiro nao esta cadastrado" << endl;
    }

    return 0;
}
