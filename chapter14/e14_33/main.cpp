#include "GT_cls.hpp"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main ()
{
  vector<int> ivec;
  int i;
  cout << "\nplease put in some integer:" << endl;
  while (cin)
    {
      cin >> i;
      ivec.push_back(i);
    }
  cin.clear();
  cout << "\nput in the bound:" << endl;
  int bound;
  cin >> bound;
  GT_cls GT(bound);
  vector<int>::iterator iter = find_if(ivec.begin(), ivec.end(), GT);
  cout <<"\n the first element big than "
       << bound << " is:" << *iter << endl;
  return 0;
}
