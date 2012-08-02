#ifndef __LISTITEM_HPP
#define __LISTITEM_HPP
template< class Type >
class ListItem {
  ListItem( Type &t ) : item( t ), next( 0 ) { }
  Type item;
  ListItem *next;
};
#endif
