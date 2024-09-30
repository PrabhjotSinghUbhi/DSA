//swap largest and smallest in an arr;
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,8};
    int sz = 9;
    int large = INT16_MIN;
    int small = INT16_MAX;
    for (int i = 0; i < sz; i++)
    {
        large = max(arr[i],large);
        small = min(arr[i],small);
    }
    swap(large , small);
    cout << "smallest: "<<small<< endl;
    cout << "largest: " << large<< endl;
    return 0;
}
