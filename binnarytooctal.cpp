#include<iostream>
#include<cmath>

using namespace std;
int binary(long long);
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"octal is = "<<binary(n);
    return 0;
}
int binary(long long a)
{
    int no=0,dno=0,i=0;
    while(a>0)
    {
        dno+=(a%10)*pow(2,i);
        i++;
        a=a/10;
    }
    
    i=1;
    while(dno>0)
    {
        no+=(dno%8)*i;
        dno/=8;
        i*=10;
    }
    return no;
}