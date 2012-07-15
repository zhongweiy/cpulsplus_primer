#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::istream;

istream &func (istream &istr)
{
    string input;
    while (istr >> input) {
        cout << input << endl;
    }
    istr.clear();

    return istr;
}

int main ()
{
    func(cin);

    return 0;
}

