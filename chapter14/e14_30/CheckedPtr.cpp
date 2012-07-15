#include "CheckedPtr.hpp"
#include <stdexcept>

CheckedPtr& CheckedPtr::operator++()
{
  if (curr == end)
    throw std::out_of_range ("increment past the end of CheckedPtr");
  ++curr;
  return *this;
}

CheckedPtr& CheckedPtr::operator--()
{
  if (curr == beg)
    throw std::out_of_range("decrement past the beginning of CheckedPtr");
  --curr;
  return *this;
}

