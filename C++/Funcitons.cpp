#include <iostream>
// Above header file declares a set of function for standard input and output.

#include <cstdio>
// This includes several macros and functions of C-style input/output library.

using namespace std;
// it imports the entirety of the std namespace into the current namespace of the program

int max_of_two(int a, int b) // function defined to returned the max of two number
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max_of_four(int a, int b, int c, int d) // use of max_of_two() function to return maximum number among four number using recursion.
{
    int res = max_of_two(a, max_of_two(b, max_of_two(c, d)));

    return res;
}

int main()
{
    int m, n, o, p;     // four integer variables is created 
    cin >> m >> n >> o >> p;    

    cout << max_of_four(m, n, o, p);    // calling of max_of_four() function

    return 0;
}