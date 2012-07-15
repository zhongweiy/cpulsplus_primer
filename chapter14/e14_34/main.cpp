#include "EQ_cls.hpp"
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
  EQ_cls EQ(bound);
  replace_if(ivec.begin(), ivec.end(), EQ, 1000);

  cout << "\nthe result is:" << endl;
  for (vector<int>::iterator iter = ivec.begin();
       iter != ivec.end(); ++iter)
    cout << *iter << " ";
  cout << endl;
  
  return 0;
}
