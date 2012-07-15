#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string find_num_alph_1(const string& str, const string target) 
{
    string str_result;
    string::size_type pos = 0;
    while ((pos = str.find_first_of(target, pos))
            != string::npos) 
        str_result += str[pos++];
    return str_result;
}

string find_num_alph_2(const string& str, const string target) 
{
    string str_result;
    string::size_type pos = 0;
    while ((pos = str.find_first_not_of(target, pos))
            != string::npos) 
        str_result += str[pos++];
    return str_result;
}

int main ()
{
    const string alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string number = "0123456789";

    string str;
    string str_alph;
    string str_num;
    cout << "\nput in a string:" << endl;
    cin >>str; 
    str_alph = find_num_alph_1(str, alph);
    str_num = find_num_alph_1(str, number);
    cout << "\nthe number in " << str
        << " is: " << str_num 
        << "\nthe alph is: " << str_alph << endl;

    str_alph = find_num_alph_2(str, number);
    str_num = find_num_alph_2(str, alph);
    cout << "\nthe number in " << str
        << " is: " << str_num 
        << "\nthe alph is: " << str_alph << endl;

    return 0;
}
