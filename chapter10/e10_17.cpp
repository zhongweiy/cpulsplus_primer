#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
using std::cout;
using std::endl;
using std::cin;
using std::map;
using std::string;
using std::ifstream;
using std::istringstream;
using std::runtime_error;

int main(int argc, char **argv)
{
    map<string, string> trans_map;
    string key, value;

    if (argc != 3)
        throw runtime_error("wrong number of arguments");

    ifstream map_file(argv[1]);
    if (!map_file)
        throw runtime_error("no transformation file");
    while (map_file >> key >> value)
        trans_map[key] = value;

    ifstream input(argv[2]);
    if (!input)
        throw runtime_error("no input file");

    string line;

    while (getline(input, line)) {
        istringstream stream(line);
        string word;
        bool firstword = true;
        while (stream >> word) {
            if (trans_map[word] != "") 
                word = trans_map[word];
            if (firstword)
                firstword = false;
            else
                cout << " ";
            cout << word;
        }
        cout << endl;
    }
    return 0;
}

