#include <iostream>
#include<vector>
using namespace std;

int main() {
    //size functions
    vector <int> vec = { 1,2,3,4,5} ;
    cout << "size = "<< vec.size()<< endl;

    //push back function
    vec.push_back(23);
    cout << "after push back size = "<< vec.size() << endl;
    for (int i : vec){
        cout << i << endl ;
    }
    
    return 0;
}