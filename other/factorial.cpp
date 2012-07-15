#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int factorial (int i)
{
    if (i >= 2)
        return i * factorial(i-1);
    else if (i == 1)
        return 1;
    else {
        cout << "illegal input" << endl;
        return -1;
    }
}

int main ()
{
    unsigned long result(0);
    int i;

    cout << "input interger:" << endl;

    if (cin >> i)
        result = factorial(i);
    if (result > 0) {
        cout << "result is:" << result << endl;
        return 0;
    } else {
        cout << "no answer!" << endl;
        return -1;
    }
}



