#include "List.hpp"
#include "ListItem.hpp"

template< class Type >
List<Type>::List()
{
  head = 0;
  tail = 0;
}

template< class Type >
void List<Type>::push_back( const Type& item )
{
  ListItem< Type > *p = new ListItem< Type >( item );
  if( empty() )
    {
      head = p;
      tail = p;
    }
  else
    {
      tail->next = p;
      tail = p;
    }
}

template< class Type >
void List<Type>::push_front( const Type& item )
{
  ListItem< Type > *p = new ListItem< Type >( item );
  if( empty() )
    {
      head = p;
      tail = p;
    }
  else
    {
      p->next = head;
      head = p;
    }
}

template< class Type>
bool List<Type>::empty( void ) const
{
  if( !head )
    return true;
  else
    return false;
}
