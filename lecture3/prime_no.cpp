#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool isprime = true;
    cout << "enter any number: ";
    cin >> n;
    for (i = 2; i * i<= n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime == true)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
    
    return 0;
}
