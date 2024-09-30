#include <iostream>
using namespace std;
int linearsearch(int arr[], int size, int target);

int main()
{
    int arr[] = {4, 2, 7, 12, 5, 8 ,1};
    int target = 5;
    int size = 7;
    cout << linearsearch(arr , size , target) << endl;
    return 0;
}

int linearsearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}