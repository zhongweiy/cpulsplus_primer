#include <sstream>
#include <stdexcept>
#include "TextQuery.hpp"


using namespace std;
//TextQuery::line_no at here is must, for here is the return type
set< TextQuery::line_no > TextQuery::run_query(const string& word) const
{
  //TODO why we need const_iterator here?
  map< string, set<line_no> >::const_iterator it = word_map.find(word);

  if (it == word_map.end())
    return set<line_no>();
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
  int sentence_n(1);
  for(line_no n = 0; n != lines_of_text.size(); ++n)
  {
    istringstream s_line(lines_of_text[n]);
    string word;
    while (s_line >> word) 
    {
      /**
       * test whether we account a sentence.
       */
      char punc = word[ word.size() - 1 ];
      string new_word;
      if ( !isalpha( punc ) )
	new_word = word.substr( 0, word.size() - 1 );
      else
	new_word = word;
      if (word_map.count(new_word) == 0)
	word_map[new_word].insert( sentence_n );
      else {
	word_map[new_word].insert( sentence_n );
      }
      if ( punc == '.' || punc == '?' || punc == '!' )
	++sentence_n;
    }
  }
}
