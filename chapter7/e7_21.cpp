#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int factorial(int val)
{
    int result(1);
    int i(1);

    if (val > 0) {
        while (i <= val)
            result *= i++;
        return result;
    } else 
        return 1;
}

int main ()
{
    int val(0);
    cin >> val;
    cout << factorial(val) << endl;

    return 0;
}

