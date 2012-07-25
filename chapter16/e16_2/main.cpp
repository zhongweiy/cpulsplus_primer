#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

template< typename T >
void my_out( ostream &out, T value )
{
  out << value;
}

void test ( ostream &out )
{
  int i(100);
  float f(1.01);
  string s("water man");
  char c('c');
  cout << "\ntest my_out template func." << endl;
  my_out( out, i );
  my_out( out, f );
  my_out( out, s );
  my_out( out, c );
}

int main( void )
{
  ofstream file("test.txt");
  if ( !file )
    {
      cout << "\ncan't open file test.txt" << endl;
      return -1;
    }
  ostringstream ss;
  cout << "\nmy_out(cout, *)" << endl;
  test( cout );
  cout << "\nmy_out(file, *)" << endl;
  test( file );
  cout << "\nmy_out(ss, *)";
  test( ss );
  cout << "the result in string_pool is: " << ss.str()
       << endl;
  /*
  string s2;
  ostringstream ss2(s2);
  ss2 << "abc" << endl;
  cout << "\ns2: " << s2
       << "\nss2: " << ss2.str() << endl;
  */
  return 0;
}
