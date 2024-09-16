#include <iostream>
using namespace std;

int main() {
    int a;
    long int b;
    double c;
    long double d;
    long long int e;
    short f;
    signed int g;
    unsigned int h;
    long long i;
    cout << "int" << " "<< sizeof(a) << endl;
    cout << "long int"<<" "<<sizeof(b) << endl;
    cout << "double"<<" "<<sizeof(c) << endl;
    cout << "long double"<<" "<<sizeof(d) << endl;
    cout << "long long int " <<" "<< sizeof(e) << endl;
    cout << "short int " <<" "<< sizeof(f) << endl;
    cout << "signed int " <<" "<< sizeof(g) << endl;
    cout << "unsigned int " <<" "<< sizeof(h) << endl;
    cout << "long long " <<" "<< sizeof(i) << endl;
    return 0;
}