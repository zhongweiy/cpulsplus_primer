#include "CheckedPtr.hpp"

bool operator== (const CheckedPtr& rhv, const CheckedPtr& lhv)
{
  if (rhv.beg == lhv.beg && rhv.end == lhv.end && rhv.curr == lhv.curr)
    return true;
  else
    return false;
}

bool operator!= (const CheckedPtr& rhv, const CheckedPtr& lhv)
{
  if (rhv == lhv)
    return false;
  else
    return true;
}


bool operator< (const CheckedPtr& rhv, const CheckedPtr& lhv)
{
  return rhv.beg == lhv.beg && rhv.end == lhv.end && rhv.curr < lhv.curr;
}
