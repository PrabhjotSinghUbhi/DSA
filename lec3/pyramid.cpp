#include <iostream>
using namespace std;

int main() {
    int count = ;
    for (int i = 0; i < count; i++)  
    {
        for (int j = 0; j < count - (i + 1); j++)//printing spaces 
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)//printing nums of triangle 1
        {
            cout << j ;
        }
        for (int j = i; j > 0; j--) //printing nums of triangle 2  //0 to i
        {
            cout << j;
        }
        cout << endl;
    }
    
    return 0;
}