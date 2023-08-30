#include <iostream>

using namespace std;

int main()
{
    int N, X, O; // two numbers N and X and opposite
    
    cin >> N >> X;

    if (N >= 4 && N <= 20 && X >= 0 && X <= N)
    {
        O = (X + N /2) % N;
        cout << O << endl;
    }
    
    return 0;
}