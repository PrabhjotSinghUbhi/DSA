//calculate sum of digits
#include <iostream>
using namespace std;

int digitsum(int num){
    int sum = 0;
    while (num > 0)
    {
        int lastdigit = num%10 ;//1234%10 ---> 4 --->123%10 -> 3 , 2 , 1
        num = num/10;//1234 ---> 123 ----> 12,1,0.
        sum = sum + lastdigit;
    }
    return sum;
}

int main() { 
    cout << digitsum(2343);
    return 0;
}