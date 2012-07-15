#include "CheckedPtr.hpp"
#include <stdexcept>


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

CheckedPtr operator+(const CheckedPtr& rhv, const int i)
{
  if (rhv.curr + i >= rhv.end)
    throw std::out_of_range("result past the end of CheckedPtr");
  else
    {
      CheckedPtr tem(rhv.beg, rhv.end);
      tem.curr = rhv.curr + i;
      return tem;
    }
}

ptrdiff_t operator-(const CheckedPtr& rhv, const CheckedPtr& lhv)
{
  if (rhv.beg == lhv.beg && rhv.end == lhv.end)
    {
      return rhv.curr - lhv.curr;
    }
  else
    {
      throw std::runtime_error("operands of - operator are not matched");
    }
}
  
      
      
  
