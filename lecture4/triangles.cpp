#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)                     // iteration 0 to n-1
    {
        for (int j = 0; j < i + 1; j++)               /*   
                                                        *             i + 1 = 1        j < i(1)
                                                        * *           i + 1 = 2        j < i(2)
                                                        * * *         i + 1 = 3        j < i(3)
                                                        * * * *       i + 1 = 4        j < i(4)
                                                        * * * * *     i + 1 = 5        j < i(5) 
                                                                                            i(5) < 5 false
                                                        */
        {

            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}