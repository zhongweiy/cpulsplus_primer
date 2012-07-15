#include <sstream>
#include <stdexcept>
#include "TextQuery.hpp"


using namespace std;
//TextQuery::line_no at here is must, for here is the return type
vector< TextQuery::line_no > TextQuery::run_query(const string& word) const
{
  //TODO why we need const_iterator here?
  map< string, vector<line_no> >::const_iterator it = word_map.find(word);

  if (it == word_map.end())
    return vector<line_no>();
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
    {
      /* we must check whether the word is in word_map
       * or the operation word_map[word].back() is operating 
       * on a empty vector, of which result isn't defined
       */
      if (word_map.count(word) == 0)
        word_map[word].push_back(n);
      else {
      /* because line appear in ascending order, we can append a new line number to the vector 
       * only if the last element of the vector isn't that line number
       */
        if (word_map[word].back() != n)
        word_map[word].push_back(n);
      }
    }
  }
}
