#include <iostream>
#include <string>
#include <cassert>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
    string s;
    while (cin >> s && s != "abc") {}
    cout << s << endl;
    assert(cin);

    return 0;
}
