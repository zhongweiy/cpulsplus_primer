#include<iostream>

int main()
{
    int sum = 0;

    for (int i = 50; i <= 100; ++i)
        sum += i;

    std::cout << "the for loop sum is:"
              << sum << std::endl;
    
    int i = 50;
    sum = 0;

    while (i <=100) {
        sum += i;
        ++i;
    }

    std::cout << "the while loop sum is:"
              << sum << std::endl;
    return 0;
}
