#include<iostream>
#include<cmath>
using namespace std;
int decimal(int);
int main()
{
    int n;
    cin >> n;
    cout<<" decimal = " << decimal(n);
    return 0;
}
int decimal(int n)
{
    int number = 0,i=0,rem;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        number+=rem*pow(8,i);
        i++;
    }
    return number;
}