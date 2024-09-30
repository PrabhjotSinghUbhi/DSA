// using 2 pointer approach
#include <iostream>
using namespace std;
void reverse(int arr[] , int sz);

int main()
{
    int arr[] = {0,2,4};
    int sz = 3 ; 
    reverse(arr , sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

void reverse(int arr[] , int sz)
{
    int start = 0;
    int end = sz -1;

    while (start < end)
    {
        swap(arr[start] , arr[end] );
        start++;
        end--;
    }
}