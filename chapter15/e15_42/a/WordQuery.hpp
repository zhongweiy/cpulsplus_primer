#ifndef _WORDQUERY_HPP
#define _WORDQUERY_HPP
#include <string>
#include <set>
#include <iostream>
#include "Query_base.hpp"
#include "TextQuery.hpp"

class WordQuery: public Query_base {
  friend class Query;
  WordQuery( const std::string &s ) : query_word( s ) { }
  std::set<line_no> eval( const TextQuery &t ) const
  { return t.run_query( query_word ); }
  std::ostream& display( std::ostream &os ) const
  { return os << query_word; }
  std::string query_word;
};
#endif
