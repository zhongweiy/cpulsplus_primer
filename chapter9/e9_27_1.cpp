#include <deque>
#include <list>
#include <string>
#include <iostream>
#include <algorithm>

using std::deque;
using std::list;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::find;


int main ()
{
    list<string> slist;
    string str;

    cout << "\nput in some string:" << endl;
    while (cin >> str) 
        slist.push_back(str);

    cin.clear();
    cout << "\nput a string to find in string list:" << endl;
    cin >> str;
    list<string>::iterator it = 
        find(slist.begin(), slist.end(), str);

    if (it != slist.end()) 
        slist.erase(it);

    for (list<string>::iterator it = slist.begin();
            it != slist.end(); ++it)
        cout << *it << "\t";
    cout << endl;

    return 0;
}


