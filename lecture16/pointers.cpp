#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    int **parent_ptr = &ptr;

    // cout << **(parent_ptr)<<endl;
    cout << *ptr;
    return 0;
}