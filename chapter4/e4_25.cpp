#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main ()
{
    const string str1("a string"), str2("another string");
    const char *c_str1 = "a string", *c_str2 = "another string";

    if (str1 > str2) 
        cout << "str1 is bigger than str2" << endl;
    else if (str1 < str2)
        cout << "str1 is smaller than str2" << endl;
    else 
        cout << "str1 is equal to str2" << endl;

    if (strcmp(c_str1, c_str2) > 0)
        cout << "c_str1 is bigger than c_str2" << endl;
    else if (strcmp(c_str1, c_str2) < 0)
        cout << "c_str1 is smaller than c_str2" << endl;
    else 
        cout << "c_str1 is equal to c_str2" << endl;

    return 0;
}


