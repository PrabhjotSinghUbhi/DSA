#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // size function
    vector<int> vec = {2, 3, 6, 4, 3};

    cout << "size: " << vec.size() << endl;
    for (auto &&i : vec)
    {
        cout << i << "  ";
    }

    cout << endl;
    // push back function
    vec.push_back(45);
    vec.push_back(34);
    vec.push_back(69);
    cout << endl
         << "size: " << vec.size() << endl;
    for (auto &&i : vec)
    {
        cout << i << "  ";
    }

    //pop back function.
    vec.pop_back();
    cout << endl
         << "size: " << vec.size() << endl;
    for (auto &&i : vec)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << endl;
    //front and back function.

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    //at function

    cout << endl;
    cout << vec.at(2);

    return 0;
}