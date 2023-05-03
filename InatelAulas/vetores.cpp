#include <iostream>

using namespace std;
int main()
{
    int i;
    //int popular;
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
        }
        
    }
    cout << "maior = " << maior << endl;
    return 0;
}