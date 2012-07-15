#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main (void)
{
    const size_t array_sz = 5;
    int ia1[] = {1, 2, 3, 4, 5};
    int ia2[array_sz];
    vector<int> ivec1(10,20);
    vector<int> ivec2;

    for (size_t idx = 0; idx < array_sz; ++idx) {
        ia2[idx] = ia1[idx];
        cout << ia2[idx] << endl;
    }
    ivec2 = ivec1;
    cout << ivec2[0] << endl;

    return 0;
}

        
