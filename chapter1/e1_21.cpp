#include<iostream>
#include"include/Sales_item.h"

int main()
{
    Sales_item item;

    while(std::cin >> item)
        std::cout << item;

    return 0;
}
