#include<bits/stdc++.h>
using namespace std;

int main()
{
 int years, months, days;
   
 cin>>days;
   
 years = days / 365;
   
 months = days % 365 / 30;
   
 days = days % 365 % 30;
   
 cout<<years<<" ano(s)"<<endl;
 cout<<months<<" mes(es)"<<endl;
 cout<<days<<" dia(s)"<<endl;
   
 return 0;  
}