#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

vector<int>::const_iterator find (vector<int>::const_iterator first, 
        vector<int>::const_iterator last, int val)
{
    while (first++ != last) {
        if (*first == val)
            return first;
    }
    return last;
}

int main ()
{
    vector<int> ivec(10, 9);
    cout << *find(ivec.begin(), ivec.end(), 9) << endl;

    return 0;
}


