#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

string make_plural(size_t ctr, const string &word,
                                const string &ending = "s")
{
    return ctr > 1 ? word + ending : word;
}

int main()
{
    cout << make_plural(3, "sucess", "es") << endl;
    cout << make_plural(1, "sucess", "es") << endl;
    cout << make_plural(1, "failure", "s") << endl;
    cout << make_plural(3, "failure", "s") << endl;

    return 0;
}
