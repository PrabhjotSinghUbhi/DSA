#include <iostream>
using namespace std;
int decimaltobinary(int decnum);

int main() {
    cout << decimaltobinary(50);
    return 0;
}


int decimaltobinary(int decnum)
{
    int pow = 1;
    int ans = 0;
    while (decnum > 0)
    {
        int rem = decnum % 2;
        decnum /= 2;

        ans += (rem *pow );
        pow *= 10;
    }
    return ans;
}
