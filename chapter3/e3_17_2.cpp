/* part 2 of 3.17, rewrite 3.13's part 2 */
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main (int argc, char ** argv)
{
    vector<int> intvec;
    int input = 0;
    int sum = 0;

    while (cin >> input) 
        intvec.push_back(input);
    //check whether it's odd or even 
    if (intvec.size()&1) {
        cout << "you have put in odd number integer!" << endl;
            cout << "the pair number's sum is:" << endl;
        for (vector<int>::iterator iter1 = intvec.begin(), iter2 = intvec.end() - 1;
               iter1 < iter2; ++iter1, --iter2) {
            sum = *iter1 + *iter2;
            cout << sum  << endl;
        }
        cout << "the middle element of your input is: " << intvec[(intvec.size() - 1) / 2] << endl;
    } else {
        cout << "you have put in even number integer!" << endl;
        cout << "the pair two number's sum is:"  << endl;
        for (vector<int>::iterator iter1 = intvec.begin(), iter2 = intvec.end() - 1;
               iter1 < iter2; ++iter1, --iter2) {
            sum = *iter1 + *iter2;
            cout << sum  << endl;
        }
    }
    return 0;
}
