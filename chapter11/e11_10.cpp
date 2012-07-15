#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool GT6(const string &s)
{
  return s.size() >= 6;
}

int main ()
{
  vector<string> words;
  string word;
  while (cin >> word)
    words.push_back(word);

  sort(words.begin(), words.end());

  vector<string>::iterator end_unique = 
    unique(words.begin(), words.end());
  words.erase(end_unique, words.end());

  cout << "\nunique words list are:" << endl;
  for (vector<string>::iterator it = words.begin();
      it != words.end(); ++it) 
    cout << *it << " ";
  cout << endl;

  vector<string>::size_type wc = 0;
  vector<string>::iterator it = words.begin();
  while ((it = find_if(it, words.end(), GT6)) != words.end() )
  {
    ++wc;
    ++it;
  }

  cout << "\n" <<  wc << " words " << " 6 charactors or longer" << endl;

  return 0;
}

