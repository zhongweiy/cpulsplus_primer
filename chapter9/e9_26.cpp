#include <vector>
#include <list>
#include <iostream>
using std::vector;
using std::list;
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> ivec(ia, sizeof(ia) / sizeof(*ia) + ia);
    list<int> ilist(ia, sizeof(ia) / sizeof(*ia) + ia);

    for (vector<int>::iterator it = ivec.begin();
            it != ivec.end(); ++it)
        if (*it % 2 == 0) {
            it = ivec.erase(it);
            if (it == ivec.begin())
                continue;
            else
                --it;
        }

    cout << "\nafter erase even element from vector:" << endl;
    for (vector<int>::iterator it = ivec.begin();
            it != ivec.end(); ++it)
        cout << *it << '\t';
    cout << endl;

    cout << "\nbefore erase odd element from list: " 
        << "the size of list is:" << ilist.size()
        << endl;
    for (list<int>::iterator it = ilist.begin();
            it != ilist.end(); ++it)
        if (*it % 2 != 0) {
            it = ilist.erase(it);
            if (it == ilist.begin())
                continue;
            else
                --it;
        }

    cout << "\nafter erase odd element from list: " 
        << "the size of list is:" << ilist.size()
        << endl;
    for (list<int>::iterator it = ilist.begin();
            it != ilist.end(); ++it)
        cout << *it << '\t';
    cout << endl;

    return 0;
}

