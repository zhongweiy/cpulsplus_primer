#include <algorithm>
#include <list>
#include <string>
#include <iostream>
using namespace std;

int main ()
{
  list<string> slt;
  string word;
  cout << "\nput in some string:" << endl;
  while (cin >> word)
    slt.push_back(word);

  cin.clear();
  string query_word;

  do {
    cout << "\nput query word:" << endl;
    cin >> query_word; 
    list<string>::size_type num;
    num = count(slt.begin(), slt.end(), query_word);
    cout << "\nthere " << (num > 1
        ? " are " : " is ") << num 
      << " \"" << query_word << "\" in list" << endl;
  } while (cin);

  return 0;
}

