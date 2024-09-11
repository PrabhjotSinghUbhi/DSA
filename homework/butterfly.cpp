#include <iostream>
using namespace std;

int main() {
    int n = 4;
    //top left numbers
    for (int i = 0; i < n; i++) //iterations rows from 0 to n
    {
        for (int j = 0; j < i+1; j++)//right triangle (i + 1)times
        {
            cout<<"*" <<" ";
        }
        // cout<<endl;
        for (int j = 0; j < 2*(n-i)-5; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    //bottom left numbers
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}