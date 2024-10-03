//using brute force method.       
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector < int > vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = vec.size();
    int maxarr = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int current_sum = 0;
        for (int j = i; j < n; j++)             //5 times array print 0 to n // start to n
        {
            current_sum  += vec[j];
            maxarr = max(maxarr,current_sum);
        }
    }
    cout << maxarr;
    
    return 0;
}