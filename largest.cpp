#include<iostream>
using namespace std;
int main()
{
    int i,n,a[1000],larg;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }
    larg=a[0];
    for(i=1;i<n;i++)
    {
        if(larg<a[i])
        larg=a[i];
    }
    cout<<"largest = "<<larg;
    return 0;
}
