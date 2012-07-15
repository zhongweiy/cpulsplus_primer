#ifndef _ORQUERY_HPP
#define _ORQUERY_HPP
#include "BinaryQuery.hpp"
#include "Query.hpp"
#include <set>

class OrQuery: public BinaryQuery {
  friend Query operator|( const Query&, const Query&);
  OrQuery( Query left, Query right ) :
    BinaryQuery( left, right, "|" ) { }
  std::set<line_no> eval( const TextQuery& ) const;
};

inline Query operator|( const Query &lhs, const Query &rhs )
{
  return new OrQuery( lhs, rhs );
}

#endif
