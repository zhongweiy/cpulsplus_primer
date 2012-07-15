#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main ()
{
  map<string, vector<string> > family;

  cout << "\nput surname:" << endl;
  string surname;
  while (cin >> surname) {
    string childname;
    //vector<string> childnames(family[surname]);
    cout << "\nput childnames:" << endl;
    while (cin >> childname) 
      family[surname].push_back(childname);
    cin.clear();
    cout << "\nput surname:" << endl;
  }

  cout << "\nput query surname:" << endl;
  string query_surname;
  cin.clear();
  while (cin >> query_surname) {
    map<string, vector<string> >::const_iterator iter = 
      family.find(query_surname);
    if (iter != family.end()) {
      for (vector<string>::const_iterator iter_v = (iter->second).begin();
          iter_v != (iter->second).end(); ++iter_v) {
        cout << *iter_v << '\t';
      }
    } else 
      cout << "\nno query surname in record." << endl;
    cout << "\nput query surname:" << endl;
  }

  return 0;
}
