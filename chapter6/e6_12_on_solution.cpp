#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main ()
{
    string preWord, currWord;
    string repWord;
    int currCnt = 0, maxCnt = 1;

    cout << "Enter some words(Ctrl+D to end):" << endl;
    while (cin >> currWord) {
        if (currWord == preWord)
            ++currCnt;
        else {
            if (currCnt > maxCnt) {
                maxCnt = currCnt;
                repWord = preWord;
            }
            currCnt = 1;
        }
        preWord = currWord;
    }

    if (maxCnt != 1) 
        cout << '"' << repWord << '"'
            << "repeated for " << maxCnt
            << " times." << endl;
    else
        cout << "There is no repeated word." << endl;

    return 0;
 }
