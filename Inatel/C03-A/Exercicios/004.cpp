#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Estrutura para representar cada aluno
struct Aluno 
{
    string nome;
    string curso;
    int matricula;
};


void encontrarAluno(const vector<Aluno>& alunos, const string& nomeAluno) {
    for (const auto& aluno : alunos) 
    {
        if (aluno.nome.find(nomeAluno) != string::npos) 
        {
            cout << aluno.nome << endl;
            cout << aluno.curso << endl;
            cout << aluno.matricula << endl;
            return;
        }
    }
    cout << "Aluno nao localizado" << endl;
}

int main() 
{
    int N;
    cin >> N;
    vector<Aluno> alunos(N);

    for (int i = 0; i < N; ++i) 
    {
        cin.ignore(); 
        getline(cin, alunos[i].nome);
        getline(cin, alunos[i].curso);
        cin >> alunos[i].matricula;
    }

    cin.ignore();
    string nomeAlunoProcurado;
    getline(cin, nomeAlunoProcurado);

    encontrarAluno(alunos, nomeAlunoProcurado);

    return 0;
}
