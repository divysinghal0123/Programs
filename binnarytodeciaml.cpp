#include<iostream>
#include<cmath>
using namespace std;
int binnary(long long);
int main()
{
   long long n;
   cin>>n;
   cout<<"decimal = "<<binnary(n);
   return 0;
}
int binnary(long long a)
{
    int number = 0,i=0,remainder;
    while(a>0)
    {
        remainder=a%10;
        a=a/10;
        number+=remainder*pow(2,i);
        i++;
    }
    return number;
}