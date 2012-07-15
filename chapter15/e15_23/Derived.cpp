#include "Derived.hpp"

bool Derived::bar_fcn(Derived *pb)
{
  return foo_bar == pb->foo_bar;
}
