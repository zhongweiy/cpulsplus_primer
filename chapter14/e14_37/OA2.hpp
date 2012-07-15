#ifndef __OA2_HPP
#define __OA2_HPP
#include <functional>
#include <algorithm>

class OA2
{
public:
  OA2(const int &i) : bound(i) {}
  bool operator() (const int &i)
  { bind2nd(greater<int>(), bound); }
private:
  int bound;
};
#endif
  
