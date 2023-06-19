#include <iostream> 

using namespace std;

int main()
{
    int n;  //números de colunas
    int m; // números de linhas
    cin >> n;
    cin >> m;
    //MATRIZ
   int matriz[10][10];
   
   // INPUT DE VALORES DA MATRIZ

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }
    
    // OUTPUT DA MATRIZ
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matriz[i] [j] << " ";
        }
        cout << endl;
    }
    return 0;
}