#ifndef _NOTQUERY_HPP
#define _NOTQUERY_HPP

#include <set>
#include <iostream>
#include "Query_base.hpp"
#include "Query.hpp"

class NotQuery: public Query_base {
  friend Query operator~( const Query & );
  NotQuery( Query q ) : query( q ) { }
  std::set<line_no> eval( const TextQuery& ) const;
  std::ostream& display( std::ostream &os ) const
  { return os << "~(" << query << ")"; }
  const Query query;
};

inline Query operator~( const Query &oper )
{
  return new NotQuery( oper );
}
#endif
