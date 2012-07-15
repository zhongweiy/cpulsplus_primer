#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double power (int val1, int val2)
{
    if (val2 == 1)
        return val1;
    if (val2 == 0)
        return 1;
    if (val2 == -1)
        return 1.0/val1;
    return (power(val1, val2/2) * power(val1, val2-val2/2));
        
}

int main ()
{
    int val1, val2;
    cout << "put 2 integer:" << endl;

    cin >> val1 >> val2;
    cout << power(val1, val2) << endl;

    return 0;
}


