#include <iostream>
using namespace std;

int main() {
    int n  = 4;
    for (int i = 0; i < n; i++)
    {
    //for spaces 
      for (int j = 0; j < n-i-1; j++)
      {
        cout << " ";
      }
      //for stars
      for (int j = 0; j < 2*i+1; j++)
      {
        cout << "*";
      }
      cout << endl;
    }

    for (int i = 0; i < n-1; i++)
    {
      //for spcacs
      for (int j = 0; j < i+1; j++)
      {
        cout << " ";
      }
      for (int j = 0; j < 2*n -(3+2*i); j++)
      {
        cout << "*";
      }
      cout << endl;
    }

    return 0;
}