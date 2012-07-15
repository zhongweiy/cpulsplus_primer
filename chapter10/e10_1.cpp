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

int main ()
{
    vector< pair<string, int> > pvec;
    pair<string, int> input;

    while (cin >> input.first >> input.second)
        pvec.push_back(input);

    cout << "\nyou have input:" << endl;
    for (vector< pair<string, int> >::iterator it = pvec.begin();
            it != pvec.end(); ++it) {
        cout << it->first << '\t' << it->second << endl;
    }
    
    return 0;
}
