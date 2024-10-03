#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,3,2,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int start = 0; start < size; start++)//start to size // start = 0 //
    {
        for (int end = start; end < size; end++)//end = start to size //end = start = 0 // 
        {
            for (int i = start; i <= end; i++)//start to end = 0// print => arr[0]=1    //
            {
                cout << arr[i];
            }//i = 1 , 2, 3,4
            
            cout << "  ";
        }                       //end = 1 , 2 , 3, 4
        cout << endl;
    } //start = 1
    

    return 0;
}