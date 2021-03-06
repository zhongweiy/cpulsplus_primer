#ifndef __SCREENPTR_HPP
#define __SCREENPTR_HPP

#include "ScrPtr.hpp"
#include <iostream>

class ScreenPtr {
public:
  ScreenPtr(Screen *p): ptr(new ScrPtr(p)) { }
  ScreenPtr(const ScreenPtr &orig):
    ptr(orig.ptr) { ++ptr->use;}
  ScreenPtr& operator=(const ScreenPtr&);
  Screen* operator->() { return ptr->sp; }
  Screen &operator* () { return *ptr->sp; }
  const Screen* operator->() const { return ptr->sp; }
  const Screen &operator* () const { return *ptr->sp; }
  friend bool operator== (const ScreenPtr& rhv, const ScreenPtr& lhv);
  
  ~ScreenPtr() { if (--ptr->use == 0) delete ptr; }
  //this is a test function for PtrScr class
  void test(void) { std::cout << "this is a test function for PtrScr class"
			      << std::endl;}
private:
  ScrPtr *ptr;
};


#endif
