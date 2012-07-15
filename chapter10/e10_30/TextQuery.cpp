#include "TextQuery.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <sstream>
#include <stdexcept>

using namespace std;

set<line_no> TextQuery::run_query(const std::string& word) const
{
  set<line_no> lines;
  map< string, set<line_no> >::iterator it = 
    word_map.find(word);

  if (it == word_map.end())
    return lines;
  else
    return it->second;
}

string TextQuery::text_line(line_no n) const
{
  /*no need to check whether n is negative, since line_no is non-negative*/
  if (n < lines_of_text.size())
    return lines_of_text[n];
  throw out_of_range("line number out of range");
}

void TextQuery::store_file(ifstream& file)
{
  string line;
  while (getline(file, line))
    lines_of_text.push_back(line);
}

void TextQuery::build_map()
{
  for(line_no n = 0; n != lines_of_text.size(); ++n)
  {
    istringstream s_line(lines_of_text[n]);
    string word;
    while (s_line >> word)
      word_map[word].insert(n);
  }
}
