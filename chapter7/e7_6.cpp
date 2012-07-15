#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void swap (int *iptr1, int *iptr2)
{
    int temp = *iptr1;
    *iptr1 = *iptr2;
    *iptr2 = temp;
}

int main ()
{
    int i,j;
    cin >> i >> j;

    swap(&i, &j);

    cout << i << "\t" << j << endl;

    return 0;
}

