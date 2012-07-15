#include <algorithm>
#include <iostream>

using namespace std;

int main ()
{
  int iarr[100];
  iarr[67] = 10;
  fill_n(iarr, 100, 0);
  cout << iarr[67] << endl;

  return 0;
}
