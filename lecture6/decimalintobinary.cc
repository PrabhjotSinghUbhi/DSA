#include <iostream>
using namespace std;
int decimaltobinary(int decnum);

int main() {
    cout << decimaltobinary(42);
    return 0;
}


int decimaltobinary(int decnum)
{
    int pow = 1;
    int ans = 0;
    while (decnum > 0)
    {
        int rem = decnum % 2;//42%2 --> 0   //21%2 --> 1
        decnum /= 2;//---> 42/2 --> 21      //21/2 ---> 10

        ans += (rem *pow );//--->0*1 = 0   //1*10 + 0 + 1*1000 ==> 101010

        pow *= 10;//1*10 = 10 100 1000 10000
    }
    return ans;
}
