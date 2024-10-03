#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int maxSubArraySum(vector<int>& vec) {
    int maxSum = INT_MIN;
    int n = vec.size();
    
    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += vec[j];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }
    
    return maxSum;
}

int main() {
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArraySum(vec);
    cout << "Maximum subarray sum is: " << result << endl;
    return 0;
}
