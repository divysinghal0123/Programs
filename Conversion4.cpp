#include<bits/stdc++.h>
using namespace std;
int tooctal(int n)
{
    int x=1;
    int ans =0;
    while(x<=n){
        x*=8;
    }
    x/=8;
    while(x>0){
        int lastdigit = n/x;
        n-=lastdigit*x;
        x/=8;
        ans = ans*10+lastdigit;
    }
    return ans;
}
int main()
{
    int n;
    cin >>n;
    cout<<tooctal(n)<<endl;
    return 0;
}