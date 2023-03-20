#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, r;
    float a, m, d;
    cin >> n;
    
    a = n/365;
    r = n%365;
    
    m = r/30;
    d = r%30;
    
    cout << a <<" ano (s)"<< endl;
    cout << m <<" mes (s)"<< endl;
    cout << d <<" dia (s)"<< endl;
 
    return 0;
}

