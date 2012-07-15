#include <iostream>
#include <bitset>
#include <stdexcept>
using std::bitset;
using std::cout;

int main ()
{
    bitset<33> b;
    b.set();
    
    try {
    unsigned long ulval = b.to_ulong();
    //} catch (std::overflow_error err) {
    } catch (std::runtime_error err) {
        cout << err.what() << std::endl;
    }

    return 0;
}
