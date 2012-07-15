#include "Message.hpp"
#include <iostream>

using namespace std;

int main ()
{
  Message msg_in("in"), msg_out("out"), msg_empty, msg_test(msg_out);
  Folder fld_in, fld_out;

  msg_in.save(fld_in);
  msg_out.save(fld_out);

  //  cout << msg_in.contents << endl;
  return 0;
}
