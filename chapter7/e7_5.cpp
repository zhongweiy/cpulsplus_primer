#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int larger (int val, const int *iptr)
{
    return val > *iptr ? val : *iptr;
}

int main ()
{
    int val1, val2;
    cin >> val1 >> val2;

    cout << larger(val1, &val2) << endl;
    
    return 0;
}

