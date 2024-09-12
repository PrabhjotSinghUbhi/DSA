#include <iostream>
using namespace std;

int main() {
    int i;
    int n = 4;                                               //n defines the number of rows
    for ( i = 0 ; i < n; i++){                               //runs from 0 to n-1(4) i.e 0,1,2,3
        char ch = 'A';
        for (int j = 0 ; j < n ; j++){                        //inner loop running from 0 to n-1
            cout << ch;                                      
            ch = ch + 1;                                    //implicit typecasting occurs from char to int to char.
        }

        cout << endl;                  //next line
    }
    return 0;
}