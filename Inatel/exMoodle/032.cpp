#include <iostream> 
#include <math.h> 
#include <iomanip>

using namespace std;

//Função média geometrica
void converte(float F, float &C, float &K)
{
    C = (F - 32) * 5 / 9;
    K = C + 273;

}
int main()
{
    cout << fixed << setprecision(2);
    // váriaveis de input e output
    float fH; 
    float fC;
    float cel;
    //INPUT
    cin >> fH;
    // chamando a função converte
    converte(fH, fC, cel);
    // Imprimindo o resultado
    cout << "Celsius: " << fC << endl;
    cout << "Kelvin: " << cel << endl;

    return 0;
}
// V 1.0.0