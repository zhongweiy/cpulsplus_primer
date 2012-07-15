#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main (int argc, char **argv)
{
    if (argc == 1)
        return -1;

    for (size_t idx = 1; idx != argc; ++idx) 
        cout << *(argv + idx) << endl;

    return 0;
}
