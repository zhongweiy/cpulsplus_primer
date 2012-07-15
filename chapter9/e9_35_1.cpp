#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

/* when input is a string with a capital letter at the end
 * this program would get a segmentation fault
 */
bool my_erase(string& str, string::iterator& it) {
    if (it != str.end()) {
        if (isupper(*it)) {
            it = str.erase(it);
            return true;
        } else 
            return false;
    }
    return false;
}

int main ()
{
    string str;
    cin >> str;

    for (string::iterator it = str.begin();
            it != str.end(); ++it) 
        while (my_erase(str, it));

    cout << str;

    return 0;
}
