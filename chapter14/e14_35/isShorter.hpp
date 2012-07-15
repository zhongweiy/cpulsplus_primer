#ifndef __ISSHORTER_HPP
#define __ISSHORTER_HPP

#include <string>

class isShorter
{
public:
  bool operator() (const std::string &s1, const std::string &s2)
  { return s1.size() < s2.size();
  }
};
#endif  
