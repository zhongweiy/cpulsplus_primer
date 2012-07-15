#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
    int i1, i2;
    cout << "put two integer请:" << endl;

    if (!(cin >> i1 >> i2)) {
        cout << "input doesn't right." << endl;
        return 0;
    }

    cout << "the " << (i1 > i2 ? i2 : i1) << " is smaller" << endl;

    return 0;
}
