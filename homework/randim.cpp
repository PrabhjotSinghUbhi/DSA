#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        //spaces
        for (int j = 0; j < n-i-1; j++)//0 to (n-i-1)times
        {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<< "*";
        }
        cout<< " "; 
        cout << endl;
    }
    
    return 0;
}