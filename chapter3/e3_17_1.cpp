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
        for (vector<int>::iterator iter = intvec.begin();
                iter != intvec.end() - 1; iter = iter + 2) {
            sum = *iter + *(iter+1);
            cout << sum  << endl;
        }
        cout << "the last element of your input is: " << intvec[intvec.size() - 1] << endl;
    } else {
        cout << "you have put in even number integer!" << endl;
        cout << "the adjacent two number's sum is:"  << endl;
        for (vector<int>::iterator iter = intvec.begin();
                iter != intvec.end(); iter = iter + 2) {
            sum = *iter + *(iter + 1);
            cout << sum  << endl;
        }
    }
    return 0;
}
