#include <iostream>

int main ()
{
    int ffcon(0), ficon(0), flcon(0);
    char input,pre_input('\0');

    std::cout << "put some string: " << std::endl;

    while (std::cin.get(input)) {
        switch (input) {
            case 'f':
                if (pre_input == 'f') {
                    ++ffcon;
                } 
                break;
            case 'i':
                if (pre_input == 'f') {
                    ++ficon;
                }
                break;
            case 'l':
                if (pre_input == 'f') {
                    ++flcon;
                }
                break;
            default:
                break;
        }
        pre_input = input;
    }

    std::cout << "ffcon:" << ffcon << "\t"
        << "ficon:" << ficon << "\t"
        << "flcon:" << flcon << "\t"
        << std::endl;

    return 0;
}
