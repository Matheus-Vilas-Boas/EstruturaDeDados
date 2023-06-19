#include<iostream>
#include<iomanip>
using namespace std;

float calcMedia(int notas[], int nAlunos) {
    float soma = 0;
    for (int i = 0; i < nAlunos; i++) {
        soma += notas[i];
    }
    return soma / nAlunos;
}

int nAbaixo(int notas[], int nAlunos, float media) {
    int count = 0;
    for (int i = 0; i < nAlunos; i++) {
        if (notas[i] < media) {
            count++;
        }
    }
    return count;
}

int nAcima(int notas[], int nAlunos, float media) {
    int count = 0;
    for (int i = 0; i < nAlunos; i++) {
        if (notas[i] >= media) {
            count++;
        }
    }
    return count;
}

int main() {
    int nAlunos;
    cin >> nAlunos;

    int* notas = new int[nAlunos];
    for (int i = 0; i < nAlunos; i++) {
        cin >> notas[i];
    }

    float media = calcMedia(notas, nAlunos);
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << media << endl;

    int abaixoMedia = nAbaixo(notas, nAlunos, media);
    int acimaMedia = nAcima(notas, nAlunos, media);
    cout << "Alunos com nota abaixo da media: " << abaixoMedia << endl;
    cout << "Alunos com nota acima da media: " << acimaMedia << endl;

    delete[] notas;

    return 0;
}
