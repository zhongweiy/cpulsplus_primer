/* part 2 of 3.13 */
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
        for (vector<int>::size_type idx = 0; idx != (intvec.size() - 1) / 2; ++idx) {
            sum = intvec[idx] + intvec[intvec.size() - 1 - idx];
            cout << sum  << endl;
            //test index is pro leading to overflow
            //cout << "intvec[idx + 100]: "<<intvec[idx + 100];
        }
        cout << "the middle element of your input is: " << intvec[(intvec.size() - 1) / 2] << endl;
    } else {
        cout << "you have put in even number integer!" << endl;
        cout << "the pair two number's sum is:"  << endl;
        for (vector<int>::size_type idx = 0; idx != intvec.size() / 2; ++idx) {
            sum = intvec[idx] + intvec[intvec.size() -1 - idx];
            cout << sum  << endl;
        }
    }
    return 0;
}
