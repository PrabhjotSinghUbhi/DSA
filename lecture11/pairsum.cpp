#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>ans = {2,7,11,15};
    int target = 9;
    int n = ans.size();
    vector<pair<int , int >>nums;
    for (int i = 0; i < n ; i++)       //1
    {
        for (int j = i+1; j < n ; j++)  //1,2 //1,3 ,, 
        {
            if (ans[i] + ans[j] == target)
            {
                nums.push_back({i,j});
            }
            
        }
        
    for (auto& p : nums) {
        cout << "Pair (" << ans[p.first] << ", " << ans[p.second] << ") at indices (" << p.first << ", " << p.second << ")" << endl;
    }
    return 0;\
    }
}