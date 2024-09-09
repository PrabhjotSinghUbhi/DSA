#include <iostream>
using namespace std;

int main() {
    int i;
    int n = 4;
    for ( i = 0 ; i < n; i++){
        char ch = 'A';
        for (int j = 0 ; j < n ; j++){
            cout << ch;
            ch = ch + 1;//implicit typecasting occurs.
        }

        cout << endl;
    }
    return 0;
}