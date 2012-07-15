#include "ScreenPtr.hpp"
#include "PtrScr.hpp"
#include "Screen.hpp"
#include <iostream>
using namespace std;

int main ()
{
  Screen* win1 = new Screen(10, 10, "this is my screen");
  ScreenPtr win1_ptr(win1);
  PtrScr win1_ptr_pp(&win1_ptr);

  win1->set('#').display(cout);
  win1_ptr_pp->test();
  return 0;
}
  
  
