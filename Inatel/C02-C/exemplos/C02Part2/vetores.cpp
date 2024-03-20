#include <iostream>

using namespace std;

int main()
{
    int i; //contador
    int idade[5]; // armazena as idades
    // Atribuindo valores
    idade[0] = 12;
    idade[1] = 24;
    idade[2] = 37;
    idade[3] = 6;
    idade[4] = 18;
    // Mostrando o vetor
    for (i=0;i<5;i++)
        cout << idade[i] << endl;

    return 0;
}