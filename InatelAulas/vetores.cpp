#include <iostream>

using namespace std;
int main()
{
    int notas[5];
    int i;
    float media;
    int soma;

    soma = 0;
    for (i = 0; i < 5; i++)
    {
        cin >> notas[i];
        
    }
    for (size_t i = 0; i < 5; i++)
    {
        soma = soma + notas[i];
    }
    media = soma / i;
    cout << "media = " << media << endl;
    return 0;
}
int vetor()
{
    int i;
    int popular;
    int maior;
    int nseguidores[3];

    for ( i = 0; i < 3; i++)
    {
        cin >> nseguidores[i];
    }
    maior = 1;
    for ( i = 0; i < 3; i++)
    {
        if (nseguidores[i] > maior)
        {
            maior = nseguidores[i];
            popular = i;
        }
        
    }
    cout << "maior = " << maior << endl;
    cout << "popular = " << popular << endl;
    return 0;
}