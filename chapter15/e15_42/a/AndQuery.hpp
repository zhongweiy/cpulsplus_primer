#ifndef _ANDQUERY_HPP
#define _ANDQUERY_HPP
#include "BinaryQuery.hpp"
#include "Query.hpp"
class Query;
class BinaryQuery;

class AndQuery: public BinaryQuery {
  friend Query operator&( const Query&, const Query&);
  AndQuery( Query left, Query right ) :
    BinaryQuery( left, right, "&" ) { }
  std::set<TextQuery::line_no> eval( const TextQuery& ) const;
};

inline Query operator&( const Query &lhs, const Query &rhs )
{
  return new AndQuery( lhs, rhs );
}

#endif
