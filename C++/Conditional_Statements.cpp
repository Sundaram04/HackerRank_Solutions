#include <iostream>
// Above header file declares a set of function for standard input and output.

using namespace std;
// it imports the entirety of the std namespace into the current namespace of the program

// Main Function
int main()
{
    int n; // A variable 'n' of integer datatype is created
    cin >> n;

    // Conditionals are used to the lowercase English word corresponding to the number
    if (n == 1)
    {
        cout << "one";
    }
    else if (n == 2)
    {
        cout << "two";
    }
    else if (n == 3)
    {
        cout << "three";
    }
    else if (n == 4)
    {
        cout << "four";
    }
    else if (n == 5)
    {
        cout << "five";
    }
    else if (n == 6)
    {
        cout << "six";
    }
    else if (n == 7)
    {
        cout << "seven";
    }
    else if (n == 8)
    {
        cout << "eight";
    }
    else if (n == 9)
    {
        cout << "nine";
    }
    else
    {
        cout << "Greater than 9";
    }
    return 0;
}