#include <iostream>
#include <string>


using namespace std;

//struct dos paramentros dos alunos
struct Aluno 
{
    int matricula;
    string nome;
    float nota;
};

//função para buscar alunos por matricula
int busca_Alunos_matricula_seq(Aluno alunos[], int matriculaBuscada, int tamanho) 
{
    for (int i = 0; i < tamanho; i++)                 // 4 + 6n
    {
        if(alunos[i].matricula == matriculaBuscada)   // 4n
        {
            return i;                                 // 0
        }
    }
    return -1;
}                                                    //T = 10n + 4

//função buscar alunos por nota
int busca_Alunos_nota_seq(Aluno alunos[], int notaBuscada, int tamanho)
{
    int quantidade = 0;                           // 1
    for (int i = 0; i < tamanho; i++)             // 6n + 4
    {
        if (alunos[i].nota >= notaBuscada )       // 4n
        {
            quantidade++;                         // 3n
        }
    }

    return quantidade;                            // 1
    
}                                                 // T = 13n + 6

//função de busca binaria
int busca_binaria_alunos(Aluno alunos[], int busca_binaria, int tamanho)
{
    bool encontrou;
    int baixo, meio, alto;

    baixo = 0;                    // 1
    alto = tamanho - 1;           // 3

    encontrou = false;            // 1

    while ((baixo <= alto) && (encontrou == false))       // 6 log(n)
    {
        meio = (baixo + alto) /2;                         // 5
        if (busca_binaria < alunos[meio].matricula)       // 4 log(n)
        {
            alto = meio - 1;                              // 3
        }
        else
        {
            if (busca_binaria > alunos[meio].matricula)   // 4 log(n)
            {
                alto = meio + 1;                         // 3
            }
            else
            {
                encontrou = true;                        // 1
            }
        }
    }
    if (encontrou)
    {
        return meio;                                     // 0
    }
    else
    {
        return -1;                                       // 0
    }
}                                                     // T = 8 log(n) + 16 (ut)

int main()
{
    Aluno alunos_quantidade[40];

    alunos_quantidade[0].matricula = 1;
    alunos_quantidade[0].nome = "Anna";
    alunos_quantidade[0].nota = 7.6;

    alunos_quantidade[1].matricula = 2;
    alunos_quantidade[1].nome = "João";
    alunos_quantidade[1].nota = 4.6;

    alunos_quantidade[2].matricula = 3;
    alunos_quantidade[2].nome = "Maria";
    alunos_quantidade[2].nota = 9.6;

    alunos_quantidade[3].matricula = 4;
    alunos_quantidade[3].nome = "Lavinia";
    alunos_quantidade[3].nota = 6.6;


    return 0;
}