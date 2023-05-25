#include <iostream>
 
using namespace std;
 
int main() {
    int nota;

    while (cin >> nota){
    switch (nota)
    {
    case 5 :
        cout << "Exelente\n";
        break;
    case 4:
        cout << "Otimo" << endl;
        break;
    
    case 3 :
        cout << "Bom" << endl;
        break;
    case 2 :
        cout << "Regular" << endl;
        break;
    case 1 :
        cout << "Ruim" << endl;
        break;
    default:
        cout << "Nota invalida"<< endl;
        break;
    }
    
    
    }
    return 0;
}