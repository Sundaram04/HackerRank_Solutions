#include <iostream>
// // Above header file declares a set of function for standard input and output.

using namespace std;
// it imports the entirety of the std namespace into the current namespace of the program


void update(int *a, int *b)     // function defined to update the value.
{
    int temp = *a;      // temporary variable is created
    *a = *a + *b;

    if (temp > *b)      // conditionals applied to update the value of *b
    {
        *b = temp - *b;
    }
    
    else
    {
        *b = *b - temp;
    }
}

// main function

int main()
{
    int m, n;       // variable defined
    int *pm = &m, *pn = &n;

    cin >> m >> n;
    update(pm, pn);     // function call
    cout << m << "\n"       // printing the updated value 
         << n;

    return 0;
}