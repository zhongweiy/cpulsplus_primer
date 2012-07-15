#include <algorithm>
#include <vector>
#include <deque>
#include <iostream>
#include <iterator>

using namespace std;

int main ()
{
  cout << "\nput some integer:" << endl;

  istream_iterator<int> in_iter(cin);
  istream_iterator<int> eof;
  vector<int> ivec(in_iter, eof);
  vector<int> ivec1;
  deque<int> ideq;
  cout << "\nyou've inputed:" << endl;
  for (vector<int>::iterator it = ivec.begin();
     it != ivec.end(); ++it) 
   cout << *it << " ";
  cout << endl;

  replace_copy(ivec.begin(), ivec.end(),
     back_inserter(ivec1), 4, 0);
  replace_copy(ivec.begin(), ivec.end(),
     front_inserter(ideq), 4, 0);

  cout << "\nafter replace copy:\n" 
    << "in vec1:" << endl;
  for (vector<int>::iterator it = ivec1.begin();
     it != ivec1.end(); ++it) 
   cout << *it << " ";
  cout << endl;

  cout << "\nin deque:" << endl;
  for (deque<int>::iterator it = ideq.begin();
     it != ideq.end(); ++it) 
   cout << *it << " ";
  cout << endl;

  return 0;
}
