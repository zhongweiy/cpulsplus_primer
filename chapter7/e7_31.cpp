#include "Sales_item.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main ()
{
    Sales_item book;
    string isbn;
    unsigned units_sold;
    double revenue;
    
    cout << "please put in isbn units_sold revenue for Sales_item:"
        << endl;

    cin >> isbn >> units_sold >> revenue;

    book.read(isbn, units_sold, revenue);
    book.write();
    book.add(book);
    cout << "after add:" << endl;
    book.write();

    return 0;
}


    
