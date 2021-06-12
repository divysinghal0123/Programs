#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i,sum=0;
    float avg;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=sum/n;
    }
    cout<<avg;
    return 0;

}