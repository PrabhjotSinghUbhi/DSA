#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector <int>vec ;
    
    vec.push_back(0);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << vec.size()<<endl;
    cout  << vec.capacity();
    
    return 0;
}