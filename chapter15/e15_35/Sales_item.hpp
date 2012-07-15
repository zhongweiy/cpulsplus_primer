#ifndef __SALES_ITEMS_HPP
#define __SALES_ITEMS_HPP
#include "Item_base.hpp"
#include <stdexcept>

class Sales_item {
public:
  // default constructor:unbound handle
  Sales_item(): p(0), use(new std::size_t(1)) { }
  // attaches a handle to a copy of the Item_base object
  Sales_item( const Item_base& item ) :
    p( item.clone() ), use( new std::size_t(1) ) { }
  // copy control members to manage the use count and pointers
  Sales_item( const Sales_item& q ) :
    p ( q.p ), use( q.use ) { ++*use; }
  ~Sales_item() { decr_use(); }

  // member access operators
  const Item_base *operator->() const
  { if (p) return p; else throw std::logic_error( "unbound Sales_item" ); }
  const Item_base &operator*() const
  { if (p) return *p; else throw std::logic_error( "unbound Sales_item" ); }
  
private:
  Item_base *p;//pointer to shared item
  std::size_t *use;//pointer to shared use count
  // called by both destructor and assignment operator to free pointers
  void decr_use()
  { if ( --*use == 0) { delete p; delete use; } }
};
    
#endif 
