#include <iostream> 

using namespace std;

int the()
{
    int nC;//número de colunas
    int nL;//número de linhas
    nC = 2;
    nL = 3;
    // Matriz de 2 colunas por 3 linhas
    int mat[2] [3];
    mat[0] [0] = 2;
    mat[0] [1] = 3;
    mat[0] [2] = 4;
    mat[1] [0] = 5;
    mat[1] [1] = 6;
    mat[1] [2] = 7;
    //For 
    for (int i = 0; i < nL; i++)
    {
        for (int j = 0; j < nC; j++)
        {
            cout << mat[i] [j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m; // números de linhas e colunas
    cin >> n, m;
    int nC = n; // número de colunas
    int nL = m; // número de linhas

   int matriz[10][10];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> matriz[i][j];
            cout << matriz[i] [j] << " ";
        }
        cout << endl;
    }
    return 0;
}