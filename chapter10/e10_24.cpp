#include<string>
#include<vector>
#include<set>
#include<fstream>
#include<iostream>

using namespace std;

string strip_s(set<string> &exclude_list, string &word) 
{
  if (exclude_list.find(word) != exclude_list.end())
    return word;
  else if (word[word.size() - 1] == 's')
    return word.substr(0, word.size() - 1);
  else
    return word;
}

int main ()
{
  string exclude_file_name;
  cout << "\nput the exclude file name" << endl;
  cin >> exclude_file_name;
  ifstream exclude_file(exclude_file_name.c_str());
  if (!exclude_file) {
    cout << "\ncan't open file " << exclude_file_name << endl;
    return -1;
  }

  set<string> exclude_list;
  string excluded_word;
  while (exclude_file >> excluded_word) 
    exclude_list.insert(excluded_word);

  exclude_file.close();

  string input_file_name;
  cout << "\nput the input file name:" << endl;
  cin >> input_file_name;
  ifstream input_file(input_file_name.c_str());
  if (!input_file) {
    cout << "\ncan't open file " << input_file_name << endl;
    return -1;
  }

  string word;
  string non_plural_word;
  while (input_file >> word) {
    non_plural_word = strip_s(exclude_list, word);
    cout << non_plural_word << " ";
  }
  cout << endl;

  input_file.close();
  return 0;
}
