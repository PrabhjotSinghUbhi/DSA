#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec = {1,2,3,4,1,2,3};
    int sum = 0;

    for (int i : vec)
    {
        sum ^= i;
    }

    cout << sum;

    return 0;
}