#ifndef __BULK_ITEM_HPP
#define __BULK_ITEM_HPP

#include "Disc_item.hpp"

class Bulk_item : public Disc_item {
public:
  Bulk_item(const std::string &book = "",
	    double sales_price = 0.0,
	    std::size_t qty = 0, double disc_rate = 0.0):
    Disc_item(book, sales_price, qty, disc_rate) {}
  double net_price(std::size_t cnt) const
  {
    if (cnt >= quantity)
      return cnt * (1 - discount) * price;
    else
      return cnt * price;
  }
};

#endif
