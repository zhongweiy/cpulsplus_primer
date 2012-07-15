#include <iostream>

using std::cout;
using std::endl;

int main ()
{
    cout << "int: " << sizeof(int) 
        << " long: " << sizeof(long)
        << " double: " << sizeof(double)
        << " float: " << sizeof(float)
        << " char: " << sizeof(char)
        << " int *: " << sizeof(int *)
        << endl;

    return 0;
}
