#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main ()
{
    vector<int> ivec;
    int i;

    cout << "put integers:" << endl;

    while (cin >> i)
        ivec.push_back(i);

    cout << "result is:" << endl;
    for (vector<int>::iterator iter = ivec.begin();
            iter != ivec.end(); ++iter) {
        (*iter % 2 == 0 ) ? : (*iter *= 2);
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}

