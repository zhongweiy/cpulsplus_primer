#include <iostream>
#include <vector>
#include <list>
using namespace std;

template<typename T>
void my_print( T container )
{
  typename T::size_type sz = container.size(), i(0);
  while( i < sz )
    {
      cout << container[i] << " ";
      ++i;
    }
  cout << endl;
}

int main( void )
{
  vector<string> svec;
  string s;
  cout << "\nput in some string: " << endl;
  while( cin >> s )
    svec.push_back( s );

  cout << "\ncall my_print to print the contatiner: " << endl;
  my_print( svec );

  
  // list<int> ilist;
  // for( int i = 0; i < 10 ; ++i ) 
  //   ilist.push_back( i );
  // my_print( ilist );

  return 0;
}
  
