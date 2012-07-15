#include <iostream>
#include <fstream>
#include <iterator>

using namespace std;

int main ()
{
  cout << "\nput some intergers:" << endl;

  ofstream odd_file("odd.txt");
  ofstream even_file("even.txt");
  ostream_iterator<int> odd_iter(odd_file, " ");
  ostream_iterator<int> even_iter(even_file, " ");
  istream_iterator<int> in_iter(cin), eof;
  while (in_iter != eof) 
  {
    if (*in_iter % 2 == 0)
      *even_iter++ = *in_iter++;
    else
      *odd_iter++ = *in_iter++;
  }

  odd_file.close();
  even_file.close();

  return 0;
}
