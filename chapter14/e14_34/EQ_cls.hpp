#ifndef __EQ_CLS_HPP
#define __EQ_CLS_HPP

#include <string>
#include <cstddef>

class EQ_cls {
public:
  EQ_cls(int val = 0) : bound(val) { }
  bool operator() (const int &i)
  { return i == bound; }

private:
  int bound;
};

#endif
