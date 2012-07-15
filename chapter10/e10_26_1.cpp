#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;

int main ()
{
  multimap<string, string> authors;
  cout << "\nput in author and book:" << endl;
  string author, book;
  while (cin >> author >> book) 
    authors.insert(make_pair(author, book));

  cin.clear();
  string search_item;
  cout << "\nput the erase item:" << endl;
  while (cin >> search_item) {
    if (authors.count(search_item) == 0) {
      cout << "\nno " << search_item << " in the list." << endl;
    } else {
      cout << "\n" << authors.erase(search_item)
        << " items are removed." << endl;
    }
    cout << "\nput the erase item:" << endl;
  }

  return 0;
}

    


