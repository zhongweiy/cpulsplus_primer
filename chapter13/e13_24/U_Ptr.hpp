#ifndef __U_PTR_HPP
#define __U_PTR_HPP

class U_Ptr {
  friend class HasPtr;
  int *ip;
  size_t use;
  U_Ptr(int *p): ip(p), use(1) { }
  ~U_Ptr() { delete ip; }
};

#endif
