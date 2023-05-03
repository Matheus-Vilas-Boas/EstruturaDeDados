#include <iostream>

using namespace std;

int main()
{
    int i;
    int menor;
    int maior;
    int n;
    cin >> n;
    int nseguidores[n];

    for ( i = 0; i < n; i++)
    {
        cin >> nseguidores[i];
    }
    maior = 1;
    for ( i = 0; i < n; i++)
    {
        if (nseguidores[i] > maior)
        {
            maior = nseguidores[i];
        }
        if (nseguidores[i] < menor)
        {
            menor = nseguidores[i];
        }
        
        
    }
    cout << "maior = " << maior << endl;
    cout << "menor = " << menor << endl;
    return 0;
}