#ifndef __DERIVED_HPP
#define __DERIVED_HPP

#include "Base.hpp"
#include <string>

struct Derived : public Base {
  void foo(std::string);
  bool bar_fcn(Derived *pb);
  void foobar();
protected:
  std::string bar;
};

#endif
