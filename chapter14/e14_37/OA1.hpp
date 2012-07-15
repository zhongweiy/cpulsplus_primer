#ifndef __OA1_HPP
#define __OA1_HPP
#include <functional>
#include <algorithm>

class OA1
{
public:
  OA1(const int &i) : bound(i) {}
  bool operator() (const int &i)
  { bind2nd(greater<int>(), bound); }
private:
  int bound;
};
#endif
  
