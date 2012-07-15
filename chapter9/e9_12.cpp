#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

bool find (vector<int>::const_iterator first, 
        vector<int>::const_iterator last, int val)
{
    while (first++ != last) {
        if (*first == val)
            return 1;
    }
    return 0;
}

int main ()
{
    vector<int> ivec(10, 9);
    cout << find(ivec.begin(), ivec.end(), 3) << endl;

    return 0;
}


