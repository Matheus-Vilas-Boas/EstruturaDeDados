#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno {
    int matricula;
    float nP1;
    float nP2;
    float NPA;
};

int main() {
    Aluno aluno;

    // Leitura dos dados do aluno
    cin >> aluno.matricula >> aluno.nP1 >> aluno.nP2;

    // Cálculo da média ponderada
    aluno.NPA = (2 * aluno.nP1 + 3 * aluno.nP2) / 5;

    // Exibição dos dados
    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout << fixed << setprecision(2);
    cout << "Nota da primeira prova: " << aluno.nP1 << endl;
    cout << "Nota da segunda prova: " << aluno.nP2 << endl;
    cout << "Media: " << aluno.NPA << endl;

    return 0;
}
