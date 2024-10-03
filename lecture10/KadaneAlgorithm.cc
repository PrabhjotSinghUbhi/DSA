#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    vector<int>vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max_vec = INT_MIN;
    int current_sum = 0;
    for (int val : vec)
    {
        current_sum += val;
        max_vec = max(max_vec , current_sum);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        
    }
    cout << max_vec;
    return 0;
}