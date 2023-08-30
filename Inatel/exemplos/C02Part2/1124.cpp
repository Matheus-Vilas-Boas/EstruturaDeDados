#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    // largura, comprimento, raio1, raio2, diametro1, diametro2, diametro total;
    int L, C, R1, R2, D1, D2, DT;
    double raiz;
    cin >> L >> C >> R1 >> R2;

    D1 = R1 * 2; // diametro 1
    D2 = R2 * 2; // diametro 2
    DT = (R1 + R2) * 2; // diametro total
    raiz = sqrt(L * L + C * C);
    

    
    if (L >= DT && C >= max(D1, D2)) 
    {
        cout << "S\n";
    } 
    else if (C >= DT && L >= max(D1, D2)) 
    {
        cout << "S\n";
    } 
    else if (raiz >= DT && L >= max(D1, D2)) 
    {
        cout << "S\n";
    } 
    else 
    {
        cout << "N\n";
    }

    return 0;
}