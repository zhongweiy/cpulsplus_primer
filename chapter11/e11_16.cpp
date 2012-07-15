#include <iterator>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
  ifstream file("README");
  if (!file) 
  {
    cout << "\ncan't open file README" << endl;
    return -1;
  }

  istream_iterator<string> in_iter(file), eof;
  ostream_iterator<string> out_iter(cout, " ");

  /*
  while (in_iter != eof)
    *out_iter++ = *in_iter++;
    */
  copy(in_iter, eof, out_iter);

  *out_iter = "\n";

  file.close();

  return 0;
}


  

