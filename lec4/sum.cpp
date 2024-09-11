#include <iostream>
using namespace std;
// sum of 2 numbers
int sum(int a, int b)           //parameters
{
    int s = a + b;
    return s;
}
// min of two numbers.
int minoftwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout << minoftwo(1, 2) << endl;         //arguments
    return 0;
}