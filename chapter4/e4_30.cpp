#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main ()
{
    const char *cstrp1 = "a c-style string";
    const char *cstrp2 = "another c-style string";
    const size_t len = strlen(cstrp1) + strlen(cstrp2) + 2;
    char cstrp3[len];

    strcpy(cstrp3, cstrp1);
    strcat(cstrp3, " ");
    strcat(cstrp3, cstrp2);
    
    cout << cstrp3 << endl;

    string str1("a c-style string");
    string str2("another c-style string");
    string str3 = str1 + " " + str2;

    cout << str3 << endl;

    return 0;
}




