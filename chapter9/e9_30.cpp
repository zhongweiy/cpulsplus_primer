#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    vector<int> ivec;

    cout << "\nwhen no element:" << endl
        << "size:" << ivec.size() << endl
        << "capacity:" << ivec.capacity() << endl;

    for (int i = 0; i != 10; ++i)
        ivec.push_back(24);

    cout << "\nwhen with 10 elements:" << endl
        << "size:" << ivec.size() << endl
        << "capacity:" << ivec.capacity() << endl;

    for (int i = 0; i != 30; ++i)
        ivec.push_back(24);

    cout << "\nwhen with 40 elements:" << endl
        << "size:" << ivec.size() << endl
        << "capacity:" << ivec.capacity() << endl;

    return 0;
}

