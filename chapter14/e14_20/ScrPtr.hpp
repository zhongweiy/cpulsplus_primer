#ifndef __SCRPTR_HPP
#define __SCRPTR_HPP
#include <cstddef>
class Screen;

class ScrPtr {
  friend class ScreenPtr;
  Screen *sp;
  size_t use;
  ScrPtr(Screen *p): sp(p), use(1) {}
  ~ScrPtr() { delete sp; }
};

#endif
