#ifndef __CHECKEDPTRUTI_HPP
#define __CHECKEDPTRUTI_HPP

#include "CheckedPtr.hpp"

extern bool operator== (const CheckedPtr& , const CheckedPtr& );
extern bool operator!= (const CheckedPtr& , const CheckedPtr& );
extern bool operator< (const CheckedPtr&, const CheckedPtr&);

#endif
