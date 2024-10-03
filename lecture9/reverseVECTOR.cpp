#include <iostream>
#include<vector>
using namespace std;
void revese(vector<int>&vec );

int main() {
    vector<int>vec= {1,2,3,4,5};
    revese(vec);
    for (auto &&i : vec)
    {
        cout << i << "  ";
    }

    return 0;
}

void revese(vector<int>&vec ){
    int start = 0;
    int end = vec.size() - 1 ;

    while (start < end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}
/*Pass by Value vs Pass by Reference
Pass by Value:

When you pass a variable by value, a copy of the variable is made and passed to the function. Changes made to the variable inside the function do not affect the original variable.

Example with arrays: In C++, arrays are always passed by reference, even though it looks like you are passing them by value. This means changes made to the array inside the function affect the original array.

Pass by Reference:

When you pass a variable by reference, you pass the actual variable itself, not a copy. Changes made to the variable inside the function affect the original variable.

With vectors, if you want the function to modify the original vector, you need to pass it by reference using &.

Why the Difference?
Arrays:

Arrays in C++ naturally behave like pointers when passed to functions, meaning they are inherently passed by reference. So, you don't need to explicitly use &.

Vectors:

Vectors are objects, and when passed to functions, they are passed by value unless explicitly specified otherwise. To modify the original vector, you need to use &.*/