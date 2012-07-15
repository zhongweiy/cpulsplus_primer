#include "GT_cls.hpp"
#include "isShorter.hpp"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main ()
{
  
  vector<string> words;
  string next_word;
  cout << "\n put in strings:" << endl;
  while (cin >> next_word)
    words.push_back(next_word);
  sort(words.begin(), words.end());
  vector<string>::iterator end_unique =
    unique(words.begin(), words.end());
  words.erase(end_unique, words.end());
  stable_sort(words.begin(), words.end(), isShorter());

  cout << "\nplease enter the bound1 and bound2:" << endl;
  cin.clear();
  int bound1(0), bound2(0);
  cin >> bound1 >> bound2;
  
  vector<string>::size_type wc =
    count_if(words.begin(), words.end(), GT_cls(bound1, bound2));
  cout << wc << " " << bound1 << " and " << bound2
       << " characters or longer" << endl;
  return 0;
}

