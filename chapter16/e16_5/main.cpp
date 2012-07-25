#include <iostream>
#include <string>
using namespace std;

template< typename T>
const T& bigger( const T& v1, const T& v2 )
{
  return v1 >= v2 ? v1 : v2;
}

int main ( void )
{
  float f1(5), f2(2);
  cout << "\nbigger( f1, f2 ): "
       << bigger( f1, f2 ) << endl;
  return 0;
}
