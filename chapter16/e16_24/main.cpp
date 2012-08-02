#include <iostream>
using namespace std;

template< typename T >
int compare( const T& v1, const T& v2 )
{
  if( v1 < v2 ) return 1;
  if( v2 < v1 ) return -1;
}

int main( void )
{
  int a(1024);
  short b(18);

  cout << compare( static_cast<int>( b ), a ) << endl;
  cout << compare<short>( b, a ) << endl;
  return 0;
}
