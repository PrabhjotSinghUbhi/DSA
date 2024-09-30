#include <iostream>
void printUnique(int arr[], int size);
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printUnique(arr, size);

    return 0;
}

void printUnique(int arr[], int size)
{ // intiallization of values
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true; // assuption of truth
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j]) // taking i = 0 and checking j for = 0 ,1 ,2 , 4 .....size.  and so on
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            cout << arr[i] << "  ";
        }
    }
}