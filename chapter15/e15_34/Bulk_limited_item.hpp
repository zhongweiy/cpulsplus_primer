#ifndef __BULK_LIMITED_ITEM_HPP
#define __BULK_LIMITED_ITEM_HPP
#include <cstddef>
#include "Item_base.hpp"
#include <iostream>
#include <string>

class Bulk_limited_item : public Item_base
{
public:
  Bulk_limited_item(const std::string &book = "",
		    double sales_price = 0.0, std::size_t lt = 0, double dis = 0.0) :
    Item_base(book, sales_price), limit(lt), discount(dis) { }
    
  double net_price(std::size_t) const;
  
  Bulk_limited_item* clone(void) const
  { return new Bulk_limited_item(*this); }

  void debug (void) const
  {
    if (debug_on_off == 1)
      std::cout << "limit: " << limit
		<< " discount: " << discount << std::endl;
  }
    
private:
  std::size_t limit;
  double discount;
};

#endif
