#include <vector>
#include <string>
#include <iostream>
#include <utility>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::pair;
using std::make_pair;

int main ()
{
    vector< pair<string, int> > pvec;
    pair<string, int> input;
    string first;
    int second;

    cout << "\ncreate pair in three ways:" << endl;
    cout << "\nput string and int pair:" << endl;

    cout << "\ncreate pair in first way:" << endl;
    while (cin >> input.first >> input.second)
        pvec.push_back(input);
    cin.clear();

    cout << "\ncreate pair in second way:" << endl;
    while (cin >> first >> second) {
        input = make_pair(first, second);
        pvec.push_back(input);
    }
    cin.clear();

    cout << "\ncreate pair in third way:" << endl;
    while (cin >> first >> second) {
        input = pair<string, int>(first, second);
        pvec.push_back(input);
    }

    cout << "\nyou have input:" << endl;
    for (vector< pair<string, int> >::iterator it = pvec.begin();
            it != pvec.end(); ++it) {
        cout << it->first << '\t' << it->second << endl;
    }
    
    return 0;
}
