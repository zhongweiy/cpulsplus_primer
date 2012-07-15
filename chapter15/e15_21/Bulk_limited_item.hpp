#ifndef __BULK_LIMITED_ITEM_HPP
#define __BULK_LIMITED_ITEM_HPP
#include <cstddef>
#include "Item_base.hpp"

class Bulk_limited_item : public Item_base
{
public:
  double net_price(std::size_t) const;
private:
  std::size_t limit;
  double discount;
};

#endif
