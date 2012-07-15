#ifndef __BULK_ITEM_HPP
#define __BULK_ITEM_HPP
#include "Item_base.hpp"

class Bulk_item : public Item_base {
 public:
  double net_price(std::size_t) const;
 private:
  std::size_t min_qty;
  double discount;
};
#endif
