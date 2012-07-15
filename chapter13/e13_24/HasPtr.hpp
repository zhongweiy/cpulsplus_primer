#ifndef __HASPTR_HPP
#define __HASPTR_HPP

#include <iostream>
#include "U_Ptr.hpp"

class HasPtr {
public:
  HasPtr(int *p, int i): ptr(new U_Ptr(p)), val(i) {}
  HasPtr(const HasPtr&orig):
    ptr(orig.ptr), val(orig.val) { ++ptr->use; }
  HasPtr& operator=(const HasPtr&);
  ~HasPtr() { if (--ptr->use == 0) delete ptr;}
private:
  U_Ptr *ptr;
  int val;
};

#endif
