#ifndef __LIST_HPP
#define __LIST_HPP
#include "ListItem.hpp"

template< class Type > class List {
public:
  List();
  void push_back( const Type& );
  void push_front( const Type& );
  bool empty( void ) const;
private:
  ListItem<Type> *head, *tail;
};
#endif
