#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main ()
{
    string input;
    
    if (cin >> input)
        cout << input << endl;

    return 0;
}
