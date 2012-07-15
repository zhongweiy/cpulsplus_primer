#ifndef __HASPTR_HPP
#define __HASPTR_HPP

class HasPtr {
public:
  HasPtr (int *p, int i) : ptr(new int(*p)), val(i) { }
  HasPtr (const HasPtr &orig) : ptr(new int(*orig.ptr)), val(orig.val) { }
  HasPtr& operator= (const HasPtr& rhs)
  { *ptr = *rhs.ptr; val = rhs.val; return *this; }
  ~HasPtr () { delete ptr; }
private:
  int *ptr;
  int val;
}
  
  

  
