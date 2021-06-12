#include<iostream>
using namespace std;
int reverse(const string& a);
int main()
{
    string str;
    cout<<"enter the string:\n";
    getline(cin,str);
    reverse(str);
    return 0;
}
int reverse(const string& str)
{
    size_t chars = str.size();
    if(chars == 1)
    {
        cout<<str;
    }else{
        cout<<str[chars - 1];
        reverse(str.substr(0,chars-1));
    }
}