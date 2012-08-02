#include<map>
#include<iostream>
#include<vector>
using namespace std;

template< typename T1 >
typename T1::value_type most_fre( T1 iter1, T1 iter2 )
{
  map< T1, int > fre_count;
  int max_count(0);
  T1 max_iter = iter1;
  while ( iter1 != iter2 )
    {
      if( max_count < ++fre_count[iter1] )
	{
	  max_count = fre_count[iter1];
	  max_iter = iter1;
	}
      ++iter1;
    }
  //cout << *max_iter << endl;
  return *max_iter;
}      

int main ( void )
{
  vector<int> ivec;
  int i;
  cout << "\nput some integer: " << endl;
  while ( cin >> i )
    ivec.push_back( i );
  cout << "\nthe most frequency value is: "
       << most_fre( ivec.begin(), ivec.end() ) << endl;
  return 0;
}
