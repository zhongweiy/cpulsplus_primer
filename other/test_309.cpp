#include <vector>
#include <iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main ()
{
    int n;
    cin >> n;
    vector<int> ivec(n);

    cout << sizeof(ivec) << endl;

    return 0;
}
