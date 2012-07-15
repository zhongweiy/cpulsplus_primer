#include<iostream>

int main()
{
    std::cout << "put in two number" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;

    int lower, upper;
    if (v1 >= v2) {
        lower = v2;
        upper = v1;
    }else{
        lower = v1;
        upper = v2;
    }

    std::cout << " the big: " << upper << std::endl
              << " the small: " << lower << std::endl;

    return 0;
}

              
