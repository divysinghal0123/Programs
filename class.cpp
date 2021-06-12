#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[n], temp;

    cout << "Enter words: " << endl;
    for(int i = 0; i < n; ++i)
    {
      getline(cin, str[i]);
    }

    // Use Bubble Sort to arrange words
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < (n-1)- i; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < 10; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}
