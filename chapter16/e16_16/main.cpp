#include <iostream>
using namespace std;

template< typename T, size_t N >
void print_arr( T (&parm)[N] )
{
  for( int i = 0; i != N; ++i )
    cout << parm[i] << " ";
  cout << endl;
}

int main( void )
{
  int arr[3] = {0, 3, 19};
  cout << "\narr[3]'s values are: " << endl;
  print_arr(arr);
  return 0;
}
