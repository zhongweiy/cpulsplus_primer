#ifndef __BASKET_HPP
#define __BASKET_HPP
#include "Sales_item.hpp"
#include <set>

bool compare ( const Sales_item& i, const Sales_item& j )
{
  return i->book() < j->book();
}
  
class Basket {
  // type of the comparison function used to order the multiset
  typedef bool (*Comp) ( const Sales_item&, const Sales_item& );
  
public:
  // make it easier to type the type of our set
  typedef std::multiset< Sales_item, Comp > set_type;
  // typedefs modeled after corresponding container types
  typedef set_type::size_type size_type;
  typedef set_type::const_iterator const_iter;
  Basket() : items( compare ) { }
  void add_item( const Sales_item &item )
  { items.insert( item ); }
  size_type size( const Sales_item &i ) const
  { return items.count( i ); }
  double total() const;
  
private:
  std::multiset< Sales_item, Comp > items;
};
#endif    
