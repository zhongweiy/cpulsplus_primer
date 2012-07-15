#include <algorithm>
#include <iterator>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main ()
{
  cout << "\nput some interger:" << endl;
  istream_iterator<int> in_iter(cin);
  istream_iterator<int> eof;
  vector<int> ivec1(in_iter, eof) ;
  vector<int> ivec;

  sort(ivec1.begin(), ivec1.end());
  unique_copy(ivec1.begin(), ivec1.end(),
      back_inserter(ivec));

  cout << "\nthe unique element" << endl;
  for (vector<int>::iterator it = ivec.begin();
      it != ivec.end(); ++it)
    cout << *it << " ";
  
  cout << endl;
  return 0;
}
