#include<iostream>

int main()
{
    std::cout << "the for out:" << std::endl;
    for (int i = 10; i >= 0; --i)
         std::cout << i << "\t";
    
    std::cout << std::endl;
    int i = 10;

    std::cout << "the while out:" << std::endl;
    while (i >= 0) {
        std::cout << i << "\t";
        --i;
    }
    std::cout << std::endl;

    return 0;
}
