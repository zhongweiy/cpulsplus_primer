#include <vector>
#include <string>
#include <iostream>

using std::cin;
using std::vector;
using std::string;

int get_word_count(void)
{
    int a;
    cin >> a;
    return a;
}

int main ()
{
    vector<string> svec(get_word_count());

    return 0;
}
