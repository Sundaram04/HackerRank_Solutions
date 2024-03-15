#include <iostream>
// Above header file declares a set of function for standard input and output.

#include <cstdio>
// This includes several macros and functions of C-style input/output library.

using namespace std;
// it imports the entirety of the std namespace into the current namespace of the program.

int main()
{

    int a, b;

    cin >> a;
    cin >> b;
    // We have to enter as a <= b as prescribed in the question and if user will enter b <= a, get nothing.

    string arr[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // Array is created to print English lowercase numbers.

    // Conditionals applied only for a <= b
    if (a <= b)
    {
        // loop is created to print number less than 9 or even/odd if number is greater than 9.
        for (int n = a; n <= b; n++)
        {
            // if conditionals is used to print numbers less than 9 in lowercase
            if (n <= 9)
            {
                cout << arr[n - 1] << "\n";
            }

            // else if conditionals is used to print number greater than 9 as if they odd/even.
            else if (n > 9 && n % 2 == 0)
            {
                cout << "even"
                     << "\n";
            }
            else if (n > 9 && n % 2 != 0)
            {
                cout << "odd"
                     << "\n";
            }
        }
    }
    return 0;
}