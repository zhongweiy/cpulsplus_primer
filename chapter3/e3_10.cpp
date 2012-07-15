#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    cout << "put string:" << endl;

    string str_in, str_out;
    cin >> str_in;

    for (string::size_type index = 0; index != str_in.size(); ++index)
        if (!ispunct(str_in[index]))
            str_out += str_in[index];
            


    cout << "after strip punctuation, input strings become:" << endl
         << str_out << endl;
        
    return 0;
}




