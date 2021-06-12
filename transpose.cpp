#include<iostream>
using namespace std;
int main()
{
    int n,m,a[100][100],b[100][100],i,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}