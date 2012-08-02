#include <iostream>
using namespace std;

template< typename T, size_t N >
size_t array_size( T (&parm)[N] )
{
  return N;
}

int main( void )
{
  int arr[103];
  cout << "\narr[103]'s size is: "
       << array_size(arr) << endl;
  return 0;
}
