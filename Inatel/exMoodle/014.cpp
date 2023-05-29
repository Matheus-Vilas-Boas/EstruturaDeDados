#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> palavras(3);

    // Lê as três palavras
    for (int i = 0; i < 3; i++) {
        cin >> palavras[i];
    }

    // Ordena as palavras em ordem alfabética
    sort(palavras.begin(), palavras.end());

    // Exibe as palavras ordenadas
    for (int i = 0; i < 3; i++) {
        cout << palavras[i] << " ";
    }
    cout << endl;

    return 0;
}
