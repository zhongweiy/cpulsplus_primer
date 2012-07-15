#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main ()
{
    int wcon(0), maxcon(0);
    string curword, preword, maxword;

    cout << "put in some string:" << endl;

    while (cin >> curword ) {
        if (curword == preword)
            ++wcon;
        else 
            wcon = 0;
        if (wcon > maxcon) {
            maxword = curword;
            maxcon = wcon;
        }
        preword = curword;
    }
    ++maxcon;

    if (maxcon > 0)
        cout << "\nthe word " 
            << '\"' << maxword << '\"'
            << " has repeated " << maxcon << " times."
            << endl;
    else
        cout << "\nno word repeats" << endl;

    return 0;
}
