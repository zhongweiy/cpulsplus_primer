#include <iostream>

int main()
{
    const int a_sz = 10;
    int a[a_sz];

    for (int *i = a, *end = a + a_sz; i != end; ++i) {
        *i = 0;
        std::cout << *i;
    }

    return 0;
}
