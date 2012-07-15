#include <iostream>
#include <list>
#include <deque>

using std::list;
using std::deque;
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    int input;
    list<int> ilist;
    cout << "\nput in some integers:" << endl;
    
    while (cin >> input)
        ilist.push_back(input);
    deque<int> even, odd;
    for (list<int>::iterator it = ilist.begin();
            it != ilist.end(); ++it)
        if (*it % 2 == 0)
            even.push_back(*it);
        else
            odd.push_back(*it);

    return 0;
}
    
    
