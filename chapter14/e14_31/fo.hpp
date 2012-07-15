#ifndef __FO_HPP
#define __FO_HPP

struct fo {
  int operator() (int& i, int& j, int& k) { return i ? j, k }
}

#endif
