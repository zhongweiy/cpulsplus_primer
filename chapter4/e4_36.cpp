#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
    int ia[3][4];

    for (int (*p)[4] = ia; p != ia + 3; ++p) 
        for (int *q = *p; q != *p + 4; ++q)
            cout << *q << endl;

    return 0;
}
