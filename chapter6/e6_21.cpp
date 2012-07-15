#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    string curword, preword;

    while (cin >> curword) {
        if (curword == preword && isupper(curword[0])) {
            cout << '"' << curword << '"'
                << " occurs twice." << endl;
            break;
        }
        preword = curword;
        curword = "";
    }
    cout << "\npreword: " << preword << '\t'
        << "curword: " << curword << endl;
    if (curword != preword)
        cout << "no words repeat." << endl;

    return 0;
}
