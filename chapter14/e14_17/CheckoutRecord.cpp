#include "CheckoutRecord.hpp"

std::string& CheckoutRecord::operator[](const size_t i)
{
  return wait_list[i]->first + wait_list[i]->second;
}

const std::string& CheckoutRecord::operator[](const size_t i) const
{
  return wait_list[i]->first + wait_list[i]->second;
}
  
