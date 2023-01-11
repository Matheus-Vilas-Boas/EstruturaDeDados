#include<iostream>
#include<string>

using namespace std;

void name()
{
    cout << "CALCULATOR"<< endl;
    
}

int sum(int x, int y)
{
    int soma;
    soma = x * y;
    return soma;
}

int main()
{
    name();
    int x = 5, y = 4;

    int s;
    s = sum(x,y);
    cout << s << endl;
    return 0;
}
