#include <iostream>
using namespace std;
int binarytodecimal(int binum);

int main() {
    cout << binarytodecimal(101010)<<endl;
    return 0;
}
int binarytodecimal(int binum){
    int result = 0;
    int pow = 1;//2^0
    while (binum > 0)
    {
        int rem = binum % 10;
        result += rem*pow;
        pow *= 2;
        binum /= 10;
    }
    return result;
}