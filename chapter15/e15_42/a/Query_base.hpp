#ifndef _QUERY_BASE_HPP
#define _QUERY_BASE_HPP
#include <set>
#include <iostream>
#include "TextQuery.hpp"

class Query_base {
  friend class Query;
protected:
  typedef TextQuery::line_no line_no;
  virtual ~Query_base() { }
private:
  // eval return s the set of lines that this Query matches
  virtual std::set<line_no>
  eval( const TextQuery& ) const = 0;
  // display prints the query
  virtual std::ostream&
  display( std::ostream& = std::cout ) const = 0;
};
#endif
