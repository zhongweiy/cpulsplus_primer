#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

string greet(string form, string lastname, string title,
        string::size_type pos, int length)
{
    form.replace(8, 5, lastname);
    return form.replace(5, 2, title.substr(pos, length));
}

int main()
{
    string generic1("Dear Ms Daisy:");
    string generic2("MrsMsMissPeople");

    string last_name("AnnaP");
    string salute = greet(generic1, last_name, generic2, 5, 4);

    cout << salute << endl;

    return 0;
}
