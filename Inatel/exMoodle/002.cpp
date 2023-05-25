#include <iostream>

using namespace std;

int main()
{
    int i;
    int menor;
    int maior;
    int n;
    int visualizacao[1000];
    menor = 0;
    maior = 0;
    
    cin >> n;

    for(i=0; i<n;i++)
    {
    
        cin >> visualizacao[i];
    }
    for ( i = 0; i < n; i++)
    {
        if (visualizacao[i] > 10000000)
        {
            maior++;
        }
        if (visualizacao[i] < 10000000)
        {
            menor++;
        }
    }
    cout << maior<<" video(s) com mais de 10M views " << endl;
    cout << menor << " video(s) com menos de 10M views" << endl;
    return 0;
}