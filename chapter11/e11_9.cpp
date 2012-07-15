#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool GT4(const string &s)
{
  return s.size() >= 4;
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

  vector<string>::size_type wc = 
    count_if(words.begin(), words.end(), GT4);
  cout << "\n" <<  wc << " words " << " 4 charactors or longer" << endl;

  return 0;
}
