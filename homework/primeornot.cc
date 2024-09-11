// function to determine prime or not
#include <iostream>
using namespace std;

void p_or_nt(int n);

int main() {
    cout << p_or_nt(5);
    return 0;
}





void p_or_nt(int n){
    bool isprime = true;
    for (int i = 2; i < n-1 ; i++)
    {
        if (n%i == 0){
            isprime = false;
        }
        if (isprime==true)
        {
            cout << "prime";
        }
        else{
            cout << "not prime";
        }
        
    }
    
}
