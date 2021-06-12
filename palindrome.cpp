#include<iostream>
using namespace std;
int main()
{
    int n,d,s=0,t;
    cout<<"enter the number:\n";
    cin>>n;
    t=n;
    while(n>0)
    {
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if(s==t)
    {
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
    
}