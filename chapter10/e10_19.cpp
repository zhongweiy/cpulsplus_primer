#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main ()
{
  map<string, vector<pair<string, string> > > family;

  cout << "\nput surname:" << endl;
  string surname;
  while (cin >> surname) {
    string childname;
    string birthday;
    cout << "\nput childnames, and birthday:" << endl;
    while (cin >> childname >> birthday) 
      family[surname].push_back(make_pair(childname, birthday));
    cin.clear();
    cout << "\nput surname:" << endl;
  }

  cout << "\nput query surname:" << endl;
  string query_surname;
  cin.clear();
  while (cin >> query_surname) {
    map<string, vector<pair<string, string> > >::const_iterator iter = 
      family.find(query_surname);
    if (iter != family.end()) {
      for (vector<pair<string, string> >::const_iterator iter_v = (iter->second).begin();
          iter_v != (iter->second).end(); ++iter_v) {
        cout << iter_v->first << '\t' << iter_v->second << endl;
      }
    } else 
      cout << "\nno query surname in record." << endl;
    cout << "\nput query surname:" << endl;
  }

  return 0;
}
