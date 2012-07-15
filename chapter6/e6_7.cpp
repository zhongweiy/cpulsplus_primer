#include <iostream>

int main ()
{
    int acon(0), econ(0), icon(0), ocon(0), ucon(0), 
        spacecon(0), tabcon(0), newlinecon(0);
    char input;

    std::cout << "put some string: " << std::endl;

    while (std::cin.get(input))
        switch (input) {
            case 'a':
            case 'A':
                ++acon;
                break;
            case 'e':
            case 'E':
                ++econ;
                break;
            case 'i':
            case 'I':
                ++icon;
                break;
            case 'o':
            case 'O':
                ++ocon;
                break;
            case 'u':
            case 'U':
                ++ucon;
                break;
            case ' ':
                ++spacecon;
                break;
            case '\t':
                ++tabcon;
                break;
            case '\n':
                ++newlinecon;
                break;
            default:
                break;
        }

    std::cout << "acon:" << acon << "\t"
        << "econ:" << econ << "\t"
        << "icon:" << icon << "\t"
        << "ocon:" << ocon << "\t"
        << "ucon:" << ucon << std::endl
        << "spacecon:" << spacecon << "\t"
        << "tabcon:" << tabcon << "\t"
        << "newlinecon:" << newlinecon << "\t"
        << std::endl;

    return 0;
}


