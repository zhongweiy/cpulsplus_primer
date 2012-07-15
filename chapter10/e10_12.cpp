#include <iostream>
#include <string>
#include <map>
#include <utility>
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
using std::pair;

int main ()
{
    string word;
    map<string, int> word_count;
    
    while (cin >> word) {
        pair< map<string, int>::iterator, bool> ibpair = 
            word_count.insert(make_pair(word, 1));
        if (!ibpair.second)
            ++ibpair.first->second;
    }

    cout << "\nword and count:" << endl;
    for (map<string, int>::iterator it = word_count.begin();
            it != word_count.end(); ++it) {
        cout << (*it).first << '\t'
            << (*it).second << endl;
    }

    return 0;
}
