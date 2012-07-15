#ifndef __SCREENPTR_HPP
#define __SCREENPTR_HPP

#include "ScrPtr.hpp"

class ScreenPtr {
public:
  ScreenPtr(Screen *p): ptr(new ScrPtr(p)) { }
  ScreenPtr(const ScreenPtr &orig):
    ptr(orig.ptr) { ++ptr->use;}
  ScreenPtr& operator=(const ScreenPtr&);
  ~ScreenPtr() { if (--ptr->use == 0) delete ptr; }
private:
  ScrPtr *ptr;
};

#endif
