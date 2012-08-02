template< typename T >
Queue< T >& Queue< T >::operator=( const Queue& rhv )
{
  //clear this queue
  destroy();
  
  copy_elems( rhv );
  
  return *this;
}
