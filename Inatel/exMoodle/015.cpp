#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string frase;

    // Lê a frase completa
    getline(cin, frase);

    // Utiliza um stringstream para separar as palavras
    stringstream ss(frase);
    string palavra;

    // Exibe as palavras uma por linha
    while (ss >> palavra) {
        cout << palavra << endl;
    }

    return 0;
}