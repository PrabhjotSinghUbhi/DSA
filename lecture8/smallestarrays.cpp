#include <iostream>
using namespace std;

int main() {
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    int num[6] = {5 , -15 , 22 , 4 , 12 ,24};
    for (int i = 0; i < 6; i++)
    {

    //     if (num[i] < smallest){

        smallest = min(num[i] , smallest);
        
        largest =  max(num[i] , largest);
    //         smallest = num[i];
    //     }
    }
    cout << "smallest = " << smallest << endl;
    cout << "largest = "<< largest << endl;
    return 0;
}