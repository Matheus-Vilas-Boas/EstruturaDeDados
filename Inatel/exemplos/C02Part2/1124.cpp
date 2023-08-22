#include <iostream>
using namespace std;

int main()
{
    int l,c,r1,r2,w,ww,L;
    cin >> l >> c >> r1 >> r2
    L=(r1+r2)*2;
 
    w=r1*2;
    ww=r2*2;
    if(l>c)
    {
        if(l>=L && c>=(w||ww))
        {
            cout << "S\n";
        }
        else 
        {
            cou << t"N\n";
        }
    }
    else if(c>l)
    {
        if(c>=L && l>=(w||ww))
        {
            cout << "S\n";
        }
        else
        { 
            cout <<"N \n";
        }
    }
    else if(c==l)
    {
        if(l>=L && c>=(w||ww))
        {
            cout << "S\n";
        }
        else if(c>=L && l>=(w||ww))
        {
            cout << "S\n";
        }
        else 
        {
            cout << "N\n";
        }
    }
    return 0;
}