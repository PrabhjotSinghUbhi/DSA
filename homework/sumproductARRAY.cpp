#include <iostream>
using namespace std;
void sumARRAY(int arr1[], int arr2[], int size);
void productARRAY(int arr1[], int arr2[], int size);

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};
    int size = 5;
    sumARRAY(arr1, arr2, size);
    cout << endl;
    productARRAY(arr1,arr2,size);
    return 0;
}

void productARRAY(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << (arr1[i] * arr2[i]) << " ";
    }
}

void sumARRAY(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << (arr1[i] + arr2[i]) << " ";
    }
}