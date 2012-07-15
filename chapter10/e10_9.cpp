#include <iostream>
#include <string>
#include <map>
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;

int main ()
{
    string word;
    map<string, int> word_count;
    
    while (cin >> word) {
        ++word_count[word];
    }

    cout << "\nword and count:" << endl;
    for (map<string, int>::iterator it = word_count.begin();
            it != word_count.end(); ++it) {
        cout << (*it).first << '\t'
            << (*it).second << endl;
    }

    return 0;
}
