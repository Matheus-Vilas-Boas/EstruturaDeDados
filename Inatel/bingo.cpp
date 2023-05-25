#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x;
    srand(time(NULL));

    x = 0;
    for(x = 0; x < 51; x++)
    {
        cout << rand()%50 << endl;
    }
    
    return 0;
}


