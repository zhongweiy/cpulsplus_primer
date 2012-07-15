#include <string>

class Person {
  public:
    Person(const std::string &nm, const std::string &add): name(nm), address(add) {}
    std::string get_name() const { return name }
    std::string get_address() const { return address }
  private:
    std::string name;
    std::string address;
}
