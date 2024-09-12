#include <iostream>
using namespace std;

int main() {
    char i;
    cout << "enter your alphabet: \n";
    cin>>i;
    if ((int)i >= 65 && (int)i <= 90)
    
        cout << "uppercase " << (int)i;
    
    else if((int)i >= 97 && (int)i <= 122)
        cout << "lowercase" << (int)i ;
    return 0;
}