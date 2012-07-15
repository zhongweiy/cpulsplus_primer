#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int abs (int val)
{
    if (val >= 0)
        return val;
    else
        return -val;
}
int main ()
{
    int input;

    cin >> input;

    cout << abs(input) << endl;

    return 0;
}
    
