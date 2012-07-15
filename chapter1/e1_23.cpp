#include<iostream>
#include"include/Sales_item.h"

int main()
{
    Sales_item item, item_sum;

    while(std::cin >> item)
        item_sum += item;

    std::cout << item_sum << std::endl;

    return 0;
}
