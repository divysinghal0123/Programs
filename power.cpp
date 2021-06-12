#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the numbers:  ";
    cin >> a >> b;
    int result = pow(a,b);
    cout<<"power = "<<result;
    return 0;
}