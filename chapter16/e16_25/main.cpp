#include <iostream>
#include <string>
using namespace std;

template< typename T >
int compare( const T& v1, const T& v2 )
{
  if( v1 < v2 ) return 1;
  if( v2 < v1 ) return -1;
  return 0;
}

int main( void )
{
  cout << compare( static_cast<string>("ab1"), static_cast<string>("ac") ) << endl;
  cout << compare<string>( "ab1", "ac" ) << endl;
  // this call would lead to error
  // cout << compare( "ab1", "ac" ) << endl;
  cout << compare( "ab1", "ac" ) << endl;
  return 0;
}
