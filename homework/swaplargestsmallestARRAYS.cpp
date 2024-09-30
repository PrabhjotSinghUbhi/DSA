#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,2,7,8,6,4,1,3};
    int smallest = arr[0];
    int largest = arr[0];
    int small_index = 0;
    int large_index = 0;
    int sz = 8;
    for (int i = 1; i < sz; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            small_index = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            large_index = i;
        }
    }
    swap(arr[small_index],arr[large_index]);

    cout << "smallest : " << smallest << " at index " << small_index << endl;
    cout << "largest : " <<largest << " at index " << large_index<< endl;
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << "  ";
    }
    

    return 0;
}