#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> &nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n-1;

    while (i < j)
    {
        int pairsum = 0;
        while (i < j)
        {
            pairsum = nums[i] + nums[j];
            if (pairsum < target)
            {
                i++;
            }
            else if (pairsum > target)
            {
                j--;
            }
            else
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 4, 1};
    int target = 3;
    vector <int> ans = pairsum(nums, target);

    cout << ans[0] << "," << ans[1] ;

    return 0;
}