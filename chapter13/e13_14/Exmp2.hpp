#include <iostream>

class Exmp2 {
public:
  Exmp2() { std::cout << "Exmp2()" << std::endl; }
  Exmp2(const Exmp2&)
  { std::cout << "Exmp2(const Exmp2&)" << std::endl; }
  Exmp2& operator=(const Exmp2&)
  { std::cout << "operator=(const Exmp2&)" << std::endl; }
  ~Exmp2() { std::cout << "~Exmp2()" << std::endl; }
};
