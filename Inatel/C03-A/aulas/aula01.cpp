#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Aluno 
{
    int matricula;
    string nome;
    float nota;
};

Aluno buscarPorMatricula(const vector<Aluno>& alunos, int matricula) //O(n)
{
    for (const auto& aluno : alunos) 
    {
        if (aluno.matricula == matricula) 
        {
            return aluno;
        }
    }

    return {-1, "", -1.0};
}

Aluno buscarPorNome(const vector<Aluno>& alunos, const string& nome) //O(n)
{
    for (const auto& aluno : alunos) 
    {
        if (aluno.nome == nome) 
        {
            return aluno;
        }
    }

    return {-1, "", -1.0};
}

int contarAlunosComNotaSuperior(const vector<Aluno>& alunos, double notaLimite) //O(n)
{
    int count = 0;
    for (const auto& aluno : alunos) 
    {
        if (aluno.nota > notaLimite) 
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    vector<Aluno> alunos = 
    {
        {1, "Anna", 8.5},
        {2, "Matheus", 7.8},
        {3, "Fernanda", 9.2},
        {4, "Yuri", 6.9},
        
    };

    // Testando as funções
    Aluno alunoPorMatricula = buscarPorMatricula(alunos, 2);
    Aluno alunoPorNome = buscarPorNome(alunos, "Alice");
    int alunosComNotaSuperior = contarAlunosComNotaSuperior(alunos, 8.0);

    // Exibir os resultados
    if (alunoPorMatricula.matricula != -1) {
        cout << "Aluno por Matrícula: " << alunoPorMatricula.nome << endl;
    } else {
        cout << "Aluno por Matrícula não encontrado." << endl;
    }

    if (alunoPorNome.matricula != -1) {
        cout << "Aluno por Nome: " << alunoPorNome.nome << endl;
    } else {
        cout << "Aluno por Nome não encontrado." << endl;
    }

    cout << "Alunos com Nota Superior a 8.0: " << alunosComNotaSuperior << endl;

    return 0;
}
