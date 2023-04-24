#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    
    int N ;
    float razao;
    float valorInicial;
    float valor;
    float pg;
    
    cin >> N;
    cin >> valorInicial;
    cin >> razao;
    cout << valorInicial << " ";
    
    for(int i=1; i < N; i++)
    {
        pg = valorInicial * razao;
        pg = pg;
        cout << pg << " ";
    }

    return 0;
}