#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main ()
{
    vector<string*> spvec;
    string* pstr = new string[1];

    while (cin >> *pstr) {
        spvec.push_back(pstr);
        pstr = new string[1];
    }

    cout << "you have input:" << endl;
    for (vector<string*>::iterator iter = spvec.begin();
            iter != spvec.end(); ++iter) {
        cout << **iter << " the size is:" << (*iter)->size() << endl;
        delete [] *iter;
    }

    return 0;
}
