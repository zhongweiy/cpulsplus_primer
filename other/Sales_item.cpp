#include "Sales_item.h"
#include <iostream>

void Sales_item::read(const string &str, const unsigned units_sold_in, 
                      const double revenue_in)
{
    isbn = str;
    units_sold = units_sold_in;
    revenue = revenue_in;
}

void Sales_item::write() const
{
    std::cout << "isbn:" << isbn 
        << "\tunits_sold:" << units_sold 
        << "\trevenue:" << revenue << std::endl;
}

void Sales_item::add(const Sales_item &rhs)
{
    if (same_isbn(rhs)) {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
    } else {
        std::cout << " this two item's isbn are not same, can't add!" 
            << std::endl;    
        return;
    }
}

double Sales_item::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}
