#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main () 
{
    vector<string> svec;
    string input;

    while (cin >> input) 
        svec.push_back(input);

    for (vector<string>::iterator it = svec.begin();
            it != svec.end(); ++it) {
        cout << *it << '\t';
    }
    cout << endl;

    return 0;
}


