#include <iostream>
#include <stack>
#include <string>
using std::stack;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    cout << "\nput some string:" << endl;

    string input;
    stack<string> str_stack;
    while (cin >> input) 
        str_stack.push(input);

    cout << "\nwhat you have put in:" << endl;
    while (str_stack.empty() == false) {
        cout << str_stack.top() << '\t';
        str_stack.pop();
    }
    cout << endl;
    
    return 0;
}
