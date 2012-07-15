#include <sstream>
#include <string>
#include <iostream>
using std::istream;
using std::string;
using std::istringstream;
using std::cout;
using std::cin;
using std::endl;


istream& get (istream& istr)
{
    string input;
    while (istr >> input) {
        cout << input << endl;
    }

    return istr;
}

int main ()
{
    istringstream in;
    string input;
    cout << "\nput one string." << endl;
    cin >> input;
    in.str(input);
    get(in);

    return 0;
}


