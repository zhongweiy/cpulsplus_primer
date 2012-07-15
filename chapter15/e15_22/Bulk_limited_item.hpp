#ifndef __BULK_LIMITED_ITEM_HPP
#define __BULK_LIMITED_ITEM_HPP
#include <cstddef>
#include "Disc_item.hpp"

class Bulk_limited_item : public Disc_item
{
public:
  Bulk_limited_item(const std::string &book = "",
	    double sales_price = 0.0,
	    size_t qty = 0, double disc_rate = 0.0):
    Disc_item(book, sales_price, qty, disc_item) {}
  double net_price(std::size_t) const;
private:
  std::size_t limit;
};

#endif
