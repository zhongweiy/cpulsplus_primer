#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main ()
{
    vector<int> ivec;
    int input;

    cout << "put integers:" << endl;
    
    while (cin >> input) 
        ivec.push_back(input);

    int *ip;

    ip = new int[ivec.size()];
    
    int *ipbegin = ip;
    
    for (vector<int>::iterator iter = ivec.begin();
            iter != ivec.end(); ++iter, ++ipbegin)
        *ipbegin = *iter;

    cout << "the data in array is:" << endl;

    for (int *ipbegin = ip; ipbegin != ip + ivec.size(); ++ipbegin)
        cout << *ipbegin << '\t';
    cout << endl;

    delete [] ip;

    return 0;
}



