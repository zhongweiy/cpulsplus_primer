#ifndef __DISC_ITEM_HPP
#define __DISC_ITEM_HPP

#include <utility>
#include <string>

class Disc_item : public Item_base {
public:
  Disc_item(const std::string &book = "",
	    double sales_price = 0.0,
	    size_t qty = 0, double disc_rate = 0.0):
    item_base(book, sales_price),
    quantity(qty), discount(disc_rate) { }
  double net_price(size_t) const = 0;
  std::pair<size_t, double> discount_policy() const
  {
    return std::make_pair(quantity, discount);
  }
protected:
  size_t quantity;
  double discount;
};

#endif
