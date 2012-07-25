#include <iostream>
#include <string>
using namespace std;

template< typename T >
T my_abs( T p )
{
  return p >=0 ? p : -p;
}

int main( void )
{
  int i(10);
  long l(-100);
  float f(-1.2);
  string s("what?");
  
  cout << "\ntemplate func my_abs test:\n"
       << "for int i(10): " << my_abs( i ) << '\n'
       << "for long l(-100): " << my_abs( l ) << '\n'
       << "for float f(-1.2): " << my_abs( f ) << '\n'
    //for string, error:no match for ‘operator-’ in ‘-p’
    //<< "for string s(what?): " << my_abs( s )
       << endl;
    
  return 0;
}
