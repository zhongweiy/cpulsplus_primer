#include <list>
#include <string>
#include <iostream>

using namespace std;

void eli_duplicate(list<string> &strlst)
{
  strlst.sort();
  strlst.unique();
}

int main ()
{
  list<string> strlst;
  cout << "\nput some words:" << endl;
  
  string word;
  while (cin >> word) 
    strlst.push_back(word);
  eli_duplicate(strlst);

  cout << "\nafter eliminate duplicate words:" << endl;
  for (list<string>::iterator iter = strlst.begin();
      iter != strlst.end(); ++iter)
    cout << *iter << " ";
  cout << endl;

  return 0;
}


