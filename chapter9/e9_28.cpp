#include <string>
#include <vector>
#include <list>
#include <iostream>
using std::string;
using std::vector;
using std::list;
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    list<char *> cplist(10, "abc");
    vector<string> svec;

    svec.assign(cplist.begin(), cplist.end());

    for (vector<string>::iterator it = svec.begin();
            it != svec.end(); ++it) {
        cout << *it << '\t' ;
    }
    cout << endl;

    return 0;
}

