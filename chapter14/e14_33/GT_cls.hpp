#ifndef __GT_CLS_HPP
#define __GT_CLS_HPP

#include <string>
#include <cstddef>

class GT_cls {
public:
  GT_cls(int val = 0) : bound(val) { }
  bool operator() (const int &i)
  { return i >= bound; }

private:
  int bound;
};

#endif
