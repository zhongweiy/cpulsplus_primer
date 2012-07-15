#include <vector>
#include <list>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;

bool compare(const vector<int>& ivec, const list<int>& ilist)
{
    if (ivec.size() == ilist.size()) {
        vector<int>::const_iterator it_vec = ivec.begin();
        list<int>::const_iterator it_ls = ilist.begin();

        while (it_vec != ivec.end()) {
            if (*it_vec++ != *it_ls++) 
                return false;
        }
        return true;
    }
    return false;
}

int main()
{
    vector<int> ivec;
    list<int> ilist;
    int input;

    cout << "\nput some integer into ivec:" << endl;
    while (cin >> input) 
        ivec.push_back(input);
    cin.clear();
    cout << "\nput some integer into ilist:" << endl;
    while (cin >> input)
        ilist.push_back(input);

    if (compare(ivec, ilist))
        cout << "\nivec and ilist have same elements." << endl;
    else
        cout << "\nivec and ilist don't have same elements." << endl;

    return 0;
}
