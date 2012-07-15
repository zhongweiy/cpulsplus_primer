#ifndef __CHECKEDPTR_HPP
#define __CHECKEDPTR_HPP

#include <cstdlib>
#include <cstddef>
#include "Screen.hpp"

class CheckedPtr{
public:
  CheckedPtr(Screen *b, Screen *e):beg(b), end(e), curr(b) { }
  CheckedPtr& operator++();
  CheckedPtr& operator--();
  Screen& operator* () { return *curr; }
  Screen* operator-> () { return curr; }
  const Screen& operator* () const { return *curr; }
  const Screen* operator-> () const { return curr; }
  
private:
  Screen* beg;
  Screen* end;
  Screen* curr;
};

#endif
  
