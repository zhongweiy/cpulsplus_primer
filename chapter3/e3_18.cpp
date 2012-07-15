#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main (int argc, char ** argv)
{
    vector<int> ivec(10, 42);
    cout <<"the result is :\t" << endl;
    for (vector<int>::iterator iter = ivec.begin();
            iter != ivec.end(); ++iter){
        *iter = *iter * 2;
        cout <<  *iter <<" ";
    }
    cout << endl;
    return 0;
}
