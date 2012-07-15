#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main ()
{
    vector<int> ivec(10,42);
    int iarray[ivec.size()];

    for (vector<int>::size_type ix = 0;
            ix != ivec.size(); ++ix)
        iarray[ix] = ivec[ix];

    cout << iarray[0] << endl; 
    return 0;
}
