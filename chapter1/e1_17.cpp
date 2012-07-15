#include<iostream>

int main()
{
    std::cout << "put 4  numbers: " << std::endl;

    int number, no_negative;
    no_negative = 0;

    for (int i = 1; i <=4; ++i){
        std::cin >> number;
        
        if (number < 0)
            ++no_negative;
    }

    std::cout << "you have put " << no_negative
              << " negative  numbers." << std::endl;

    return 0;
}
