#include "Exmp2.hpp"
#include <iostream>
#include <list>
using namespace std;

int main()
{
  Exmp2 a;
  cout << "==after Exmp2 a==" << endl;
  Exmp2 *b, c(a);
  b = &a;
  cout << "==after b = &a;==" << endl;
  c = a;

  cout << "==dynamicly allocate Exmp2==" << endl;
  b = new Exmp2;
  delete b;
  b = new Exmp2(c);
  delete b;

  cout << "==array of Exmp2==" << endl;
  Exmp2 arr[5];
  cout << "==list of Exmp2==" << endl;
  list<Exmp2> Elist(5);
  cout << "==before return.==" << endl;
  return 0;
}
