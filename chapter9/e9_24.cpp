#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<int>::const_reference get_first_1(const vector<int> ivec)
{
    return ivec.at(0);
}

vector<int>::const_reference get_first_2(const vector<int> ivec)
{
    return ivec[0];
}

vector<int>::const_reference get_first_3(const vector<int> ivec)
{
    return ivec.front();
}

vector<int>::const_reference get_first_4(const vector<int> ivec)
{
    return *ivec.begin();
}

int main ()
{
    vector<int> ivec;
    int input;

    cout << "\nput in some integer:" << endl;
    while (cin >> input)
        ivec.push_back(input);

    cout << "\nthe first element is:" 
        //<< get_first_1(ivec) << "\t"
        //<< get_first_2(ivec) << "\t"
        //<< get_first_3(ivec) << "\t"
        << get_first_4(ivec) << "\t"
        << endl;

    return 0;
}



