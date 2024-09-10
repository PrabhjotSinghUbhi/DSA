#include <iostream>
using namespace std;

int main()
{
    int count = 4;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i; j++) // for spaces
        {
            cout << " "; // one iteration for one space
        }
        for (int j = 0; j < count - i; j++) // for numbers
        {
            cout << (i + 1);   
        }
        cout << endl;
    }
    return 0;
}