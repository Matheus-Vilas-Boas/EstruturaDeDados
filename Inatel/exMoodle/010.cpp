#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cond1, cond2, cond3;
    cin >> cond1;
    cin >> cond2;
    cin >> cond3;

    if (cond1 == "vertebrado")
    {
        if (cond2 == "ave")
        {
            if (cond3 == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else if (cond3 == "onivoro")
            {
                cout << "pomba" << endl;
            }
        }
        else if (cond2 == "mamifero")
        {
            if (cond3 == "onivoro")
            {
                cout << "homem" << endl;
            }
            else if (cond3 == "herbivoro")
            {
                cout << "vaca" << endl;
            }
        }
    }
    else if (cond1 == "invertebrado")
    {
        if (cond2 == "inseto")
        {
            if (cond3 == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else if (cond3 == "herbivoro")
            {
                cout << "lagarta" << endl;
            }
        }
        else if (cond3 == "anelideo")
        {
            if (cond3 == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else if (cond3 == "onivoro")
            {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
