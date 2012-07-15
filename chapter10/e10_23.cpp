#include<string>
#include<vector>
#include<map>
#include<fstream>
#include<iostream>

using namespace std;

void restricted_wc(ifstream &remove_file,
    map<string, int> &word_count) 
{
  vector<string> excluded;
  string remove_word;

  while (remove_file >> remove_word)
    excluded.push_back(remove_word);

  string word;
  while (cin >> word) {
    bool find_word = false;
    for (vector<string>::iterator it = excluded.begin();
        it != excluded.end(); ++it) {
      if (*it == word) {
        find_word = true;
        break;
      }
    }
    if (find_word == false)
      ++word_count[word];
  }
}

int main ()
{
  ifstream remove_file("remove_file");

  if (!remove_file) {
    cout << "\ncan't open remove file!" << endl;
    return -1;
  }

  map<string, int> word_count;
  cout << "\nput string to count word:" << endl;
  restricted_wc(remove_file, word_count);

  cout << "\nword count:" << endl;
  for (map<string, int>::const_iterator it = word_count.begin();
      it != word_count.end(); ++it) {
    cout << it->first << "\t" << it->second << endl;
  }

  return 0;
}
