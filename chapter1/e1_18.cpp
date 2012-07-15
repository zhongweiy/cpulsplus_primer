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

    for(int i = low; i <= large; ++i)
        std::cout << i << "\t";
    std::cout << std::endl;

    return 0;
}
