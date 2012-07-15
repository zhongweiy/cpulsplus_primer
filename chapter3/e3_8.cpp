#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    cout << "put string:" << endl;

    string str_in, str_sum;

    while (cin >> str_in)
        str_sum = str_in + ' ' + str_sum;
    cout << "after concatenating, input strings become:\n"
         << str_sum << endl;
        
    return 0;
}




