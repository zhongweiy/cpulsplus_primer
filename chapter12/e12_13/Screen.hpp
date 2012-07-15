#include <string>
#include <iostream>

class Screen {
  public:
    Screen(int hght, int wth, const std::string &con): height(hght), width(wth), cursor(0), contents(con) {}
    Screen(): height(10), width(10), cursor(0), contents("") {}
    inline Screen &move(int r, int c); 
    inline Screen &set(char ch);
    inline Screen &display(std::ostream &os);
    inline const Screen &display(std::ostream &os) const;

  private:
    int height;
    int width;
    int cursor;
    std::string contents;
};

Screen &Screen::move(int r, int c)
{
  //std::cout << cursor << std::endl;
  cursor = width * r + c;
  //std::cout << cursor << std::endl;
  return *this;
}

Screen &Screen::set(char ch)
{
  //std::cout << cursor << std::endl;
  contents[cursor] = ch;
  return *this;
}

Screen &Screen::display(std::ostream &os)
{
  os << contents << std::endl;
  return *this;
}
const Screen & Screen::display(std::ostream &os) const 
{
  os << contents;
  return *this;
}
