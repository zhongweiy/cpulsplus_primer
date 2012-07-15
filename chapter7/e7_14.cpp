#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec(10, 11);
    int sum(0);

    for (vector<int>::iterator iter = ivec.begin();
            iter != ivec.end(); ++iter) 
        sum += *iter;

    cout << sum << endl;

    return 0;
}
