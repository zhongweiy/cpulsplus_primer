#include <vector>
#include <string>
#include <list>
#include <iostream>
using namespace std;

template< typename T1, typename T2 >
T1 my_find( T1 iter1,
	    T1 iter2,
	    const T2& val )
{
  for( T1 iter = iter1;
       iter != iter2; ++iter )
    if( *iter == val )
      return iter;
}

int main ( void )
{
  vector<int> ivec;
  for( int i = 0; i != 10; ++i )
    ivec.push_back( i );
  vector<int>::const_iterator iter1 = my_find( ivec.begin(),
					      ivec.end(),
					      5);
  if ( *iter1 == 5 )
    cout << "\nmy_find work in vector<int>." << endl;
  else
    cout << "\nmy_find doesn't work in vector<int>." << endl;

  list<string> slist;
  slist.push_back("ab");
  slist.push_back("bb");
  slist.push_back("cb");
  slist.push_back("db");

  list<string>::const_iterator iter2 = my_find( slist.begin(),
					       slist.end(),
					       "bb" );
  if ( *iter2 == "bb" )
    cout << "\nmy_find works in list<string>." << endl;
  else
    cout << "\nmy_find doesn't work in list<string>." << endl;

  return 0;
}  
