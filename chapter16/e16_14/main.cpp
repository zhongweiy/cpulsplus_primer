#include <iostream>
#include <vector>
#include <list>
using namespace std;

template<typename T>
void my_print( T container )
{
  typename T::iterator first = container.begin();
  while( first != container.end() )
    {
      cout << *first << " ";
      ++first;
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

  cout << "\ncall my_print to print the vector contatiner: " << endl;
  my_print( svec );
  
  list<int> ilist;
  for( int i = 0; i < 10 ; ++i ) 
    ilist.push_back( i );
  cout << "\ncall my_print to print the list contatiner: " << endl;
  my_print( ilist );

  return 0;
}
  
