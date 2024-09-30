#include <iostream>
using namespace std;
void printIntersection(int arr1[] , int arr2[] , int size1 , int size2);

int main() {

    int arr1[] = { 17, 42, 63, 5, 99};
    int arr2[] = {17, 42, 88, 23, 63,99,41};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr1[0]);
    
    printIntersection(arr1,arr2,size1,size2);
    
    return 0;
}

void printIntersection(int arr1[] , int arr2[] , int size1 , int size2)  {
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i]  == arr2[j])
            {
                cout << arr2[j] << "  ";
            }
            
        }
        
    }
    
}