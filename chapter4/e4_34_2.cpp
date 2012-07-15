//another version of e4_34
#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::string;

int main ()
{
    string sinput;
    vector<string> svec;

    cout << "put strings: " << endl;

    while (cin >> sinput) 
        svec.push_back(sinput);

    char **cpp = new char *[svec.size()];

    size_t idx = 0;
    for (vector<string>::iterator iter = svec.begin();
            iter != svec.end(); ++iter, ++idx) {
        size_t str_sz = (*iter).size();
        *(cpp + idx) = new char[str_sz + 1];
        strcpy(*(cpp + idx), (*iter).c_str());
    }

    cout << endl << "you have input: " << endl;
    for (char **pbegin = cpp; pbegin != cpp + svec.size(); ++pbegin) {
        cout << *pbegin << ' ';
        delete [] (*pbegin);
    }
    cout << endl;

    delete [] cpp;


    return 0;
}
