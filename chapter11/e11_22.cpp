#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
  int iarr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> ivec(iarr, iarr + sizeof(iarr) / sizeof(int));
  list<int> ilst;

  copy(ivec.rbegin() + 2, ivec.rbegin() + 7 , back_inserter(ilst));

  for (list<int>::iterator it = ilst.begin();
      it != ilst.end(); ++it)
    cout << *it << " ";

  cout << endl;

  return 0;
}

