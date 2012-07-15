#ifndef __PTRSCR_HPP
#define __PTRSCR_HPP

#include "ScreenPtr.hpp"

class PtrScr {
public:
  PtrScr(ScreenPtr* ptr): pp(ptr) {}
  ScreenPtr *operator->() {return pp;}
  const ScreenPtr *operator->() const {return pp;} 
private:
  ScreenPtr* pp;
};
#endif
