#include <iostream>
#include <algorithm>

template< typename T1 >
int median( T1& vec )
{
  if ( !( vec.size() % 2 ) )
    {
      std::cout << "error: vector's size is even." << std::endl;
      return 0;
    }
  std::sort( vec.begin(), vec.end() );
  return *( vec.begin() + ( vec.size() - 1 ) / 2 );
}
