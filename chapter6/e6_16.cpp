#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main ()
{
    vector<int> ivec1, ivec2;
    int input(0);

    cout << "put an int vector:(-1 to the end)" << endl;
    while (cin >> input && input != -1) 
        ivec1.push_back(input);

    cout << "put an int vector:(-1 to the end)" << endl;
    while (cin >> input && input != -1) 
        ivec2.push_back(input);

    vector<int>::iterator iter1 = ivec1.begin(),
        iter2 = ivec2.begin();

    while (iter1 != ivec1.end() && iter2 != ivec2.end()) 
        if (*iter1++ != *iter2++){
            cout << "false." << endl;
            return 0;
        }

    cout << "true." << endl;
    return 0;

}
