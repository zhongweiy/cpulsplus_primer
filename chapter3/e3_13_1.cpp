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
            cout << "the adjacent two number's sum is:" << endl;
        for (vector<int>::size_type idx = 0; idx != intvec.size() - 1; idx = idx + 2) {
            sum = intvec[idx] + intvec[idx + 1];
            cout << sum  << endl;
        }
        cout << "the last element of your input is: " << intvec[intvec.size()] << endl;
    } else {
        cout << "you have put in even number integer!" << endl;
        cout << "the adjacent two number's sum is:"  << endl;
        for (vector<int>::size_type idx = 0; idx != intvec.size(); idx = idx + 2) {
            sum = intvec[idx] + intvec[idx + 1];
            cout << sum  << endl;
        }
    }
    return 0;
}
