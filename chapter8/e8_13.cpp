#include <fstream>
#include <string>
#include <iostream>
using std::ofstream;
using std::ifstream;
using std::istream;
using std::string;
using std::cout;
using std::cin;
using std::endl;


istream& get (istream& istr)
{
    string input;
    while (istr >> input) {
        cout << input << endl;
    }

    return istr;
}

ofstream& open_file(ofstream& ofs, const string& filename)
{
    ofs.close();
    ofs.clear();
    ofs.open(filename.c_str());

    return ofs;
}

ifstream& open_file(ifstream& ifs, const string& filename)
{
    ifs.close();
    ifs.clear();
    ifs.open(filename.c_str());

    return ifs;
}

int main ()
{
    string filename;
    ifstream infile;

    cout << "\nput a file to open." << endl;
    cin >> filename;
    if (!open_file(infile, filename)) {
        cout << "\ncan't open file " << filename
            << endl;
        return -1;
    }
    get(infile);

    infile.close();
    cout << "end of file" << endl;

    return 0;
}
