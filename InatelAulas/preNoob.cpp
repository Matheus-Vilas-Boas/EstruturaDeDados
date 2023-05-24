#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;


struct Aluno {
    char matricula[100];
    float nota1;
    float nota2;
};

int main() {
    cout << fixed << setprecision(2);

    int n; // quantia de matriculas a serem cadastradas

    n = 1;

    Aluno* aluno = new Aluno[n];

    for (int i = 0; i < n; i++) {
        //cin.ignore();
        cin.getline(aluno[i].matricula, 100);
        cin >> aluno[i].nota1;
        cin >> aluno[i].nota2;
    }

    for (int i = 0; i < n; i++) {
        cout << "Matricula do aluno: " << aluno[i].matricula << endl;
        cout << "Nota da primeira prova: "<< aluno[i].nota1 << endl;
        cout << "Nota da segunda prova: " << aluno[i].nota2 << endl;
    }

    delete[] aluno;

    return 0;
}
// v1.0.0
//~A.K.Y~