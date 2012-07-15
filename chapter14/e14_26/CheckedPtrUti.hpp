#ifndef __CHECKEDPTRUTI_HPP
#define __CHECKEDPTRUTI_HPP

#include "CheckedPtr.hpp"
#include <cstddef>

extern bool operator== (const CheckedPtr& , const CheckedPtr& );
extern bool operator!= (const CheckedPtr& , const CheckedPtr& );
extern bool operator< (const CheckedPtr&, const CheckedPtr&);
extern CheckedPtr operator+(const CheckedPtr&, const int);
extern ptrdiff_t operator-(const CheckedPtr&, const CheckedPtr&);
#endif
