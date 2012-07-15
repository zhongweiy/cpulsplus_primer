#include <iostream>
#include <vector>
#include <string>

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
        char *pbegin = *(cpp + idx); 
        for (string::size_type idx_str = 0; idx_str != str_sz; ++idx_str) 
            *(pbegin + idx_str) = (*iter)[idx_str];
        *(pbegin + str_sz) = '\0';
    }

    cout << endl << "you have input: " << endl;
    for (char **pbegin = cpp; pbegin != cpp + svec.size(); ++pbegin) {
        cout << *pbegin << ' ';
        delete [] *pbegin;
    }
    cout << endl;

    delete [] cpp;

    return 0;
}
