#include<iostream>

int main()
{
    std::cout << "put two numbers: " << std::endl;

    int n1, n2, sum;
    sum = 0;
    
    std::cin >> n1 >> n2;

    for (int i = n1; i <= n2; ++i)
        sum += i;

    std::cout << "the sum is: "
              << sum << std::endl;

    return 0;
}
