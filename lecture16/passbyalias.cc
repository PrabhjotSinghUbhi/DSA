#include <iostream>
using namespace std;

void changeA(int &a){//pass by alias
    a  = 10;
}

int main() {
    int a = 20;
    changeA(a);
    cout << "inside main function: " << a << endl;
    return 0;
}