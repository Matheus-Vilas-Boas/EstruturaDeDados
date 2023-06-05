#include <iostream>

using namespace std;

int maior(int vetor[], int tam)
{
    int m;
    m = -1;
    for (int i = 0; i < tam; i++)
    {
        if (m < vetor[i])
        {
            m = vetor[i];
        }
    }
    return m;
}

int main()
{
    int idades[5];
    int maiorIdade;
    maiorIdade = -1;
    int i;
    int nPessoas;
    //Números de pessoas;
    cin >> nPessoas;
    for ( i = 0; i < nPessoas; i++)
    {
        // Lendo idades e armazenando
        cin >> idades[i];

        // verificando a maior idade
        maiorIdade = maior(idades, nPessoas);
    }
    // mostrando a maior idade
    cout << "A maior idade: " << maiorIdade << endl;
    return 0;
}