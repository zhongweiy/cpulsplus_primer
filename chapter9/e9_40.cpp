#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string q1("when lilacs last in the dooryard bloom'd");
    string q2("The childe is father of the man");

    string sentence;
    sentence.assign(q2, 0, 14);
    sentence.append(q1, 17, 15); 

    cout << sentence << endl;

    return 0;
}
