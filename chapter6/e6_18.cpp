#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main ()
{
    string str1, str2;
    char yn('y');


    do {
        cout << "put two strings:" << endl;
        cin >> str1 >> str2;
        if (str1 < str2)
            cout << '"' << str1 << '"'
                << " is less than \"" << str2 << '"'
                << endl;
        cout << "type [yn] to continue or not:"
            << endl;
        cin >> yn;
    } while (cin && yn == 'y');

    return 0;
}
