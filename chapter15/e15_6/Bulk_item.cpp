#include "Bulk_item.hpp"

double Bulk_item::net_price(size_t cnt) const
{
  if (cnt >= min_qty)
    return cnt * (1 - discount) * price;
  else
    return cnt * price;
}
