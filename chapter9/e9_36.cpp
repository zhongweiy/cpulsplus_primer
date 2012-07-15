#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main ()
{
    vector<char> cvec(10, 'a');
    string str(cvec.begin(), cvec.end());
    cout << str << endl;

    return 0;
}

    
