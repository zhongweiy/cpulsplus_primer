#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;

int main (int argc, char **argv)
{
    if (argc < 3)
        return -1;

    cout << (atof(argv[1]) + atof(argv[2])) << endl;

    return 0;
    
}
