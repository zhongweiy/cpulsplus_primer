#include "CheckedPtr.hpp"
#include <stdexcept>

int & CheckedPtr::operator[] (const size_t i)
{
  //there is no need to check whether the i is befor the beginning of array
  //because size_t type is always >= 0
  if (i >= size)
    throw std::runtime_error("index out of range");
  else
    return array[i];
}

const int & CheckedPtr::operator[] (const size_t i) const
{
  //there is no need to check whether the i is befor the beginning of array
  //because size_t type is always >= 0
  if (i >= size)
    throw std::runtime_error("index out of range");
  else
    return array[i];
}

int & CheckedPtr::operator* ()
{
  if (ptr >= array + size || ptr < array)
    throw std::runtime_error("dereference out of range");
  else
    return *ptr;
}

const int & CheckedPtr::operator* () const
{
  if (ptr >= array + size || ptr < array)
    throw std::runtime_error("dereference out of range");
  else
    return *ptr;
}
