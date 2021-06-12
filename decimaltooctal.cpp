#include<iostream>
#include<cmath>
using namespace std;
int octal(int n);
int main()
{
    int n;
    cin >> n;
    cout<<" octal = "<<octal(n);
    return 0;
}
int octal(int n)
{
    int rem , i=1,number = 0;
    while(n>0)
    {
        rem=n%8;
        n=n/8;
        number+=rem*i;
        i*=10;
    }
    return number;
}