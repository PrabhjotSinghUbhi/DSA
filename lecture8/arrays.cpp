#include <iostream>
using namespace std;

int main() {
    int marks[5] = {44,54,87,99,66};
    marks[1] = 69;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    cout <<  marks[-1];
    return 0;
}