#include <string>

class Screen {
  public:
    Screen(int hght, int wth, const std::string &con): height(height), width(width), cursor(0), contents(contents) {}

  private:
    int height;
    int width;
    int cursor;
    std::string contents;
};
