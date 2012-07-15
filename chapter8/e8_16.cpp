#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::endl;
using std::cin;
using std::cout;
using std::istringstream;
using std::ifstream;

int main ()
{
    ifstream ifs("README");
    string word;
    string line;
    vector<string> lines;
    istringstream istr;

    while (getline(ifs, line))
        lines.push_back(line);

    for (vector<string>::iterator it = lines.begin();
            it != lines.end(); ++it) {
        istr.str(*it);
        while (istr >> word) 
            cout << word << "_";
        istr.clear();
        cout << endl;
    }

    return 0;
}


