#include <iostream> 

using namespace std;

//Função troca
void troca(int &X, int &Y)
{
    int a = X;
    int b = Y;

    X = b;
    Y = a;

}
int main()
{
    // váriaveis de input
    int a;
    int b;
    //INPUT
    cin >> a;
	cin >> b;
    //PROCESSAMENTO
    troca(a,b); // função troca
    //OUTPUT
    cout << a <<" " << b;

    return 0;
}
// V 1.0.0
