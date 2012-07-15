#include "Bulk_limited_item.hpp"

double Bulk_limited_item::net_price(std::size_t n) const
{
  if ( n > limit )
    return limit * (1 - discount) * price + (n - limit) * price;
  else
    return n * (1 - discount) * price;
}
