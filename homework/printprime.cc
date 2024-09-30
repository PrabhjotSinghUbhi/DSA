#include <iostream>
#include <cmath>
bool isprime(int n );
using namespace std;

int main() {
    int count = 100;
    for (int n = 0; n < count; n++)
    {
        if (isprime(n))
        {
            cout << n << "    ";
        }
    }
    return 0;
}

bool isprime(int n ){

    if (n < 2)//less than 2
    {
        return false;
    }
    
    
    for (int i = 2; i*i <= n; i++)//imp <= n
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}