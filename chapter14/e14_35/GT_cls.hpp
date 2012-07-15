#ifndef __GT_CLS_HPP
#define __GT_CLS_HPP

#include <string>
#include <cstddef>

class GT_cls {
public:
  GT_cls(size_t val1 = 0, size_t val2 = 0) : bound1(val1), bound2(val2) { }
  bool operator() (const std::string &s)
  { return s.size() >= bound1 && s.size() <= bound2; }

private:
  size_t bound1;
  size_t bound2;
};
#endif
