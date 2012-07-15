#include<iostream>
#include"include/Sales_item.h"

int main()
{
    Sales_item item, before;
    int total_count;
    total_count = 0;

    if (std::cin >> before) {
        ++total_count;
        while (std::cin >> item) {
            if (before.same_isbn(item)) 
                ++total_count;
            else {
                std::cout << "this isbn: "
                          << total_count << std::endl;
                total_count = 1;
            }
            before = item;
        }
        std::cout << "this isbn: "
                  << total_count << std::endl;
    }else{
        std::cout << "no data" << std::endl;
        return -1;
    }
    return 0;
}


