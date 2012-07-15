#include <iostream>
#include <fstream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::istream;
using std::ifstream;

istream &func (istream &istr)
{
    string input;
    while (getline(istr, input)) {
        cout << input << endl;
    }
    istr.clear();

    return istr;
}

int main ()
{
    ifstream fin("README");

    if (fin) {
        func(fin);
        fin.close();
    } else {
        cout << "can't open file 'README'" << endl;
        return -1;
    }

    return 0;
}

