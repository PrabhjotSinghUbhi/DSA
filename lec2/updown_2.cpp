#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase";
    }
    else
    {
        cout << "uppercase";
    }
    return 0;
}