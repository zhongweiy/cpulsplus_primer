#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

int main ()
{
  vector<double> ivec;
  double n;
  cout << "\nput in some integers:" << endl;
  while (cin >> n)
    ivec.push_back(n);

  double sum = accumulate(ivec.begin(), ivec.end(), 0);
  cout << "\nthe sum: " << sum << endl;

  return 0;
}

