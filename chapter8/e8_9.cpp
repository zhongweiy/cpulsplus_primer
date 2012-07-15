#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::vector;

int main ()
{
    vector<string> line_strings;
    ifstream infile;
    string filename;
    string fileline;

    cout << "\nput a file to open." << endl;
    cin >> filename;
    infile.open(filename.c_str());

    if (!infile) {
        cout << "\ncan't open file: "
            << filename << endl;
        return -1;
    }

    while (getline(infile, fileline)) 
        line_strings.push_back(fileline);

    cout << "\nfile" << filename << "'s content is:" << endl;
    for (vector<string>::iterator it = line_strings.begin();
            it != line_strings.end(); ++it)
        cout << *it << endl;
    cout << "\nfile end" << endl;

    return 0;
}
