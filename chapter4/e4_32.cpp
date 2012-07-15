#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main ()
{
    const size_t iarray_sz = 5;
    int iarray[iarray_sz] = {1, 2, 3, 4, 5};
    vector<int> ivec(iarray, iarray + iarray_sz);

    cout << ivec.size() << endl;

    return 0;
}
