#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string senha;

    getline(cin, senha);

    if (senha == "#automa moral")
    {
        cout << "Senha correta\n";
    }
    else
    {
        cout<<"Senha incorreta"<<endl;
    }

    return 0;
}