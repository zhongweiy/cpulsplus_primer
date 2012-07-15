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
    vector<string> words;
    ifstream infile;
    string filename;
    string word;

    cout << "\nput a file to open." << endl;
    cin >> filename;
    infile.open(filename.c_str());

    if (!infile) {
        cout << "\ncan't open file: "
            << filename << endl;
        return -1;
    }

    while (infile >> word) 
        words.push_back(word);
    infile.close();

    cout << "\nfile " << filename << "'s content is:" << endl;
    for (vector<string>::iterator it = words.begin();
            it != words.end(); ++it)
        cout << *it << " ";
    cout << "\nfile end" << endl;

    return 0;
}
