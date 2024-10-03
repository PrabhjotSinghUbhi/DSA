#include <iostream>
#include <vector>
using namespace std;
int linear_search(vector<int> vec, int target);

int main()
{

    vector<int> vec = {2, 4, 6, 5, 3};
    int target = 5;
    cout << linear_search(vec, target);

    return 0;
}

int linear_search(vector<int> vec, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}