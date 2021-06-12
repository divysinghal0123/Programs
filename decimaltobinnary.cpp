#include<iostream>
using namespace std;
long long decimal(int);
int main()
{
    int n;
    int binnarynumber;
    cin>>n;
    binnarynumber=decimal(n);
    cout<<"  binnary = "<<binnarynumber;
    return 0;
}
long long decimal(int n)
{
    long long number = 0;
    int remainder = 1;
    int i = 1;
    while(n>0)
    {
        remainder = n%2;
        cout<<remainder;
        n=n/2;
        number+=remainder*i;
        i*=10;
    }
    return number;
}