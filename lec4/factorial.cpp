#include <iostream>
using namespace std;

int factorial(int n){
    int fac = 1;
    for (int i = 1; i < n+1; i++)
    {
        fac = fac*i;
    }
    return fac;
}
int main() {
    cout << factorial(4) << endl;
    cout << factorial(5);
    return 0;
}