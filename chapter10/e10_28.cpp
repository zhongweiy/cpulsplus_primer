#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;

typedef multimap<string, string>::iterator authors_it; 

void print_authors(multimap<string, string> &authors) 
{
  char pre_first_letter = '\0';
  string pre_author;

  for (authors_it it = authors.begin();
      it != authors.end(); ++it) {
    char first_letter = (it->first)[0];
    string author = it->first;

    if (pre_author != "" && pre_author != author)
      cout << endl;

    if (pre_first_letter == first_letter) 
    {
      pair<authors_it, authors_it> pos = 
        authors.equal_range(author);
      cout << author << ", ";

      for (;it != pos.second; ++it) 
      {
        cout << it->second << ", ";
      }
      --it;
    } else {
      cout << "\nAuthor Names Beginning with '"
        << first_letter << "' :" << endl;
      cout << author << ", " << it->second;
    }
    pre_first_letter = first_letter;
    pre_author = author;
  }
  cout << endl;
}

int main ()
{
  multimap<string, string> authors;

  cout << "\nput in author and book:" << endl;
  string author, book;
  while (cin >> author >> book) 
    authors.insert(make_pair(author, book));

  print_authors(authors);

  return 0;
}
