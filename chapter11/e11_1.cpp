#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main ()
{
  vector<int> ivec;
  int n;
  cout << "\nput in some integers:" << endl;
  while (cin >> n)
    ivec.push_back(n);

  cin.clear();
  int query_i;

  do {
    cout << "\nput query integers:" << endl;
    cin >> query_i; 
    vector<int>::size_type num;
    num = count(ivec.begin(), ivec.end(), query_i);
    cout << "\nthere " << (num > 1
        ? " are " : " is ") << num 
      << " \"" << query_i << "\" in vector" << endl;
  } while (cin);

  return 0;
}

