#include <iostream>
using namespace std;
 
void rearrange(int arr[], int n)
{
    int j = 0; 
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}
 
// A utility function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
// Driver code
int main()
{
    int arr[1000];
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}