#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main (int argc, char ** argv)
{
    vector<string> stringvec;
    string input;

    while (cin >> input) 
        stringvec.push_back(input);
    for (vector<string>::size_type idx = 0; idx != stringvec.size(); ++idx)
        for (string::size_type idx_s = 0; idx_s != stringvec[idx].size(); ++idx_s)
            stringvec[idx][idx_s] = toupper(stringvec[idx][idx_s]);
    cout << "your input is:" << endl;
    for (vector<string>::size_type idx = 0; idx != stringvec.size(); ++idx) {
        if (idx%8 == 0 && idx !=0)
            cout << endl;
        cout << stringvec[idx] << ' ';
    }
    cout << endl;
    return 0;
}
