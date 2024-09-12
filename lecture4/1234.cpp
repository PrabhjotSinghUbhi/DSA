#include <iostream>
using namespace std;

int main() {
    int i;
    int j;
    int n = 5;
    for (i =0;i<n;i++){ // outer loop
        for (j=0 ; j <n ; j++){//inner loop
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}