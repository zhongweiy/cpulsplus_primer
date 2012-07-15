#include "ScreenPtr.hpp"

ScreenPtr& ScreenPtr::operator=(const ScreenPtr& rhs)
{
  ++rhs.ptr->use;
  if (--ptr->use == 0)
    delete ptr;
  ptr = rhs.ptr;

  return *this;
}

/*

bool operator== (const ScreenPtr& rhv, const ScreenPtr& lhv)
{
  if (rhv->get_height() == lhv->get_height() && rhv->get_width() == lhv->get_width() && rhv->get_cursor() == lhv->get_cursor() && rhv->get_contents() == lhv->get_contents()) 
    return true;
  else
    return false;
}

bool operator!= (const ScreenPtr& rhv, const ScreenPtr& lhv)
{
  return !(rhv == lhv);
}

*/


