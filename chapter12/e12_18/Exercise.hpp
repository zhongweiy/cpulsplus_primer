#include <string>

typedef std::string Type;
Type initVal();

class Exercise {
  public:
    typedef double Type;
    ::Type setVal(::Type);
    Type initVal();
  private:
    int val;
};

::Type Exercise::setVal(::Type parm)
{
  return parm + ::initVal();
}
