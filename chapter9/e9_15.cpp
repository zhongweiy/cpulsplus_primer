#include <string>
#include <iostream>
#include <list>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::list;

int main () 
{
    list<string> svec;
    string input;

    while (cin >> input) 
        svec.push_back(input);

    for (list<string>::iterator it = svec.begin();
            it != svec.end(); ++it) {
        cout << *it << '\t';
    }
    cout << endl;

    return 0;
}
