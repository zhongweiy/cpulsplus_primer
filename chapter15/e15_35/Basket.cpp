#include "Basket.hpp"

double Basket::total() const
{
  double sum(0.0);

  for ( const_iter iter = items.begin();
       iter != items.end();
       iter = items.upper_bound( *iter ) )
    {
      sum += (*iter)->net_price( items.count( *iter ) );
    }
  return sum;
}
