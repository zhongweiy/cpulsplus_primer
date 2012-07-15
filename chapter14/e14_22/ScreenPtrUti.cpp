#include "ScreenPtrUti.hpp"

bool operator== (const ScreenPtr& rhv, const ScreenPtr& lhv)
{
  return rhv.ptr == lhv.ptr;
}
