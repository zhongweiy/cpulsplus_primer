#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    cout << "put two string:" << endl;

    string str1, str2;

    cin >> str1 >> str2;

    if (str1 == str2)
        cout << "this two strings are equal." << endl;
    else if (str1 > str2)
        cout << str1 << " is larger than " << str2 << endl;
    else
        cout << str2 << " is larger than " << str1 << endl;

    if (str1.size() == str2.size())
        cout << "this two strings are same length." << endl;
    else if (str1.size() > str2.size())
        cout << str1 << "\'s size is larger than " << str2 << endl;
    else
        cout << str2 << "\'s size is larger than " << str1 << endl;
        
    return 0;
}




