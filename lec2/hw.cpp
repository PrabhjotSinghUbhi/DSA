#include <iostream>
using namespace std;
// sum of all numbers from 1 to n divisible by 3.
int main()
{
    int i;
    int n = 90;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
        
    }
    cout << sum;
    return 0;
}