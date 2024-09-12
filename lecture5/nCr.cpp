// binomial coefficient nCr.
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fac = 1;
    for (int i = 1; i < n + 1; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int fac_nr(int n, int r)
{
    int fac_n = factorial(n);
    int fac_r = factorial(r);
    int fac_nmr = factorial(n - r);

    return (fac_n) / (fac_r * fac_nmr);
}

int main()
{
    cout << fac_nr(6, 3) << endl;
    return 0;
}