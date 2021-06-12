#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,f;
    cin>>n;
    f=fact(n);
    cout<<"factorial = "<<f;
    return 0;
}
int fact(int x)
{
    if(x==0)
    return (1);
    else
    return(x*fact(x-1));
}