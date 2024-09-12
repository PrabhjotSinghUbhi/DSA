// function to determine prime.
#include <iostream>
using namespace std;

int checkprime(int n);

int main()
{
    cout << checkprime(9) << endl;
    return 0;
}



int checkprime(int n)
{
    bool isprime = true;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i == 0)
        {
            isprime = false;
        }
    }
    if (isprime == true )
    {
        cout << "prime";
    }
    else{
        cout << "not prime";
    }
    
    return 0;
}

