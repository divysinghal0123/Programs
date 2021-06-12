#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s = to_string(n);
    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}