#include <iostream>
using namespace std;
int printFibonacci(int n);

int main() {

    printFibonacci(8);
    
    return 0;
}

int printFibonacci(int n){
    int t1 = 0 , t2 = 1 , nexterm = 0 ;

    for (int i = 1; i <= n; i++)
    {
        
        if (i == 1)
        {
            cout<< t1 << " ";
            continue;               //The continue statement skips the rest of the loop iteration for these cases.
        }

        if (i == 2)
        {
            cout<< t2 << " ";
            continue;                  //The continue statement skips the rest of the loop iteration for these cases.
        }

        nexterm = t1 + t2;
        t1 = t2 ;
        t2 = nexterm;

        cout << nexterm << " ";
    }
    
}