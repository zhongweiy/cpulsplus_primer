#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    string str;
    cin >> str;

    for (string::iterator it = str.begin();
            it != str.end(); ++it)
        *it = toupper(*it);

    cout << str;

    return 0;
}
