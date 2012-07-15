#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int array_sum_v1(const int *beg, const int *end)
{
    int sum(0);

    while ( beg != end)
        sum += *beg++;
    
    return sum;
}

int array_sum_v2(const int *iptr, const size_t size)
{
    int sum(0);

    for (size_t idx = 0; idx != size; ++idx) 
        sum += *(iptr + idx);

    return sum;
}

int array_sum_v3(const int *iptr)
{
    int sum(0);

    while (*iptr != -1)
        sum += *iptr++;

    return sum;
}

int main ()
{
    int array[5] = {1, 2, 3, 4, -1};

    cout << "array_sum_v1's result:" << array_sum_v1(array, array + 4) << endl
        << "array_sum_v2's result:" << array_sum_v2(array, 4) << endl
        << "array_sum_v3's result:" << array_sum_v3(array) << endl;

    return 0;
}
