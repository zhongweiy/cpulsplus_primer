#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;

int main ()
{
  multimap<string, string> authors;
  typedef multimap<string, string>::iterator authors_it; 

  cout << "\nput in author and book:" << endl;
  string author, book;
  while (cin >> author >> book) 
    authors.insert(make_pair(author, book));

  cin.clear();
  string search_item;
  pair<authors_it, authors_it> pos;

  cout << "\nput the erase item:" << endl;
  while (cin >> search_item) {
    pos = authors.equal_range(search_item);
    if (pos.first == pos.second) 
      cout << "\nno \"" << search_item << "\" item in this list" << endl;
    else 
      authors.erase(pos.first, pos.second);
    cout << "\nput the erase item:" << endl;
  }
  return 0;
}

    


