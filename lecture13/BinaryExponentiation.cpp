#include <iostream>
using namespace std;
double myPow(double x, int n);
// to remember: in conversion between decimal(log to the base 10) to binary(log to base 2).
// Note: for a decimal number N it will (log to the base 2 + 1) digits in its binary form.

// its time complexity will be O(log(n)).

int main()
{
    int x = 2;
    int n = 6;
    cout << myPow(x, n);

    return 0;
}

double myPow(double x, int n)
{
    // int n = 101;
    int ans = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        n /= 2;
    }
    return ans;
}