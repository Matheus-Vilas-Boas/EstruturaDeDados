#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[], int nAlunos) {
    float soma = 0;
    float mediaSala;
    for (int i = 0; i < nAlunos; i++) {
        soma += notas[i];
    }
    mediaSala = soma / nAlunos;
    return mediaSala;
}

int main() {
    int N;
    cin >> N;

    int notas[N];
    for (int i = 0; i < N; i++) {
        cin >> notas[i];
    }

    float mediaTurma = media(notas, N);
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << mediaTurma << endl;

    return 0;
}
