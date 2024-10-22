#include <iostream>
using namespace std;

void badleA(int *ptr){ //pass by reference using pointer.
    *ptr = 10;
}

int main() {
    int a  = 20;
    badleA(&a);
    cout << "inside main function: " << a << endl; 
    return 0;
}