#include <iostream>
using namespace std;
//sum of n numbers using for and while loop.
int main()
{
    int sum = 0;
    int n = 5;
    for (int i = 1; i <= n; i+=2)
    {
        sum += i;
    }
    cout << sum;

    /*   while(i <= n)
    {
        sum += i;
        i++;
    }
    cout << sum;
    return 0;*/
    return 0;
}