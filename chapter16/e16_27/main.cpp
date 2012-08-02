#include "median.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main( void )
{
  vector<int> ivec;
  ivec.push_back( 1 );
  ivec.push_back( 2 );
  ivec.push_back( 2 );
  ivec.push_back( 8 );
  cout << median( ivec ) << endl;
  ivec.push_back( 4 );
  cout << median( ivec ) << endl;

  return 0;
}
