#include<iostream>

int main()
{
    std::cout << "put two  numbers: " << std::endl;

    int n1, n2, low, large;

    std::cin >> n1 >> n2;

    if (n1 > n2){
        low = n2;
        large = n1;
    }else{
        low = n1;
        large = n2;
    }

    std::cout << "the number between " << low 
              << " and " << large
              << " is: " << std::endl;

    for(int i = low, j = 1 ; i <= large; ++i, ++j){
        std::cout << i << "\t";
        if (j >= 10){
            j = 0;
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;

    return 0;
}
