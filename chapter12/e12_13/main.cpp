#include <string>
#include <iostream>
#include "Screen.hpp"

using namespace std;

int main ()
{
  Screen mywindow(10, 10, "this is my window, hello!");
  mywindow.display(cout);
  mywindow.move(1, 3).set('#').display(cout);

  return 0;
}
