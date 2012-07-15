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
    cout << "\nput some parenthesized expressions:" << endl;

    char input;
    stack<char> char_stack;
    bool find_left_p = false;
    bool find_right_p = false;

    while (cin >> input) {
        if (input == '(') 
            find_left_p = true;
        if (input == ')' && find_left_p == true) {
            while (char_stack.top() != '(')
                char_stack.pop();
            char_stack.pop();
            char_stack.push('P');
            find_left_p = false;
            find_right_p = true;
        }
        if (!find_right_p)
            char_stack.push(input);
        else
            find_right_p = false;
    }

    cout << "\nwhat you have put in:" << endl;
    while (char_stack.empty() == false) {
        cout << char_stack.top() << ' ';
        char_stack.pop();
    }
    cout << endl;
    
    return 0;
}
