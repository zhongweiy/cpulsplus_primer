#ifndef __CHECKEDPTR_HPP
#define __CHECKEDPTR_HPP

#include <cstdlib>
#include <cstddef>

class CheckedPtr{
public:
  CheckedPtr(int *b, int *e):beg(b), end(e), curr(b) { }
  CheckedPtr& operator++();
  CheckedPtr& operator--();
  int& operator[] (const size_t );
  const int& operator[] (const size_t ) const;
  int& operator* ();
  const int& operator* () const;
  friend bool operator== (const CheckedPtr&, const CheckedPtr&);
  friend bool operator< (const CheckedPtr&, const CheckedPtr&);
  friend CheckedPtr operator+(const CheckedPtr&, const int);
  friend ptrdiff_t operator-(const CheckedPtr&, const CheckedPtr&);
  
private:
  int* beg;
  int* end;
  int* curr;
};

#endif
  
