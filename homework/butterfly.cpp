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
        //top spaces
        for (int j = 0; j < 2*(n-i-1) ; j++)
        {
            cout<<" " << " ";
        }

        for (int j = 0; j < i+1; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        //top right numbers
    }


    //bottom left triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout<<"*"<<" ";
        }
        //bottom spaces
        for (int j = 0; j < 2*i; j++)
        {
            cout << " "<<" ";
        }
        //right triangle 
        for (int j = 0; j < n-i; j++)
        {
            cout << "*" <<" ";
        }
        
        cout<<endl;
    }
    return 0;
}