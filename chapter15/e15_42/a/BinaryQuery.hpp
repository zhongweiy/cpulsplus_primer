#ifndef _BINARYQUERY_HPP
#define _BINARYQUERY_HPP

#include <iostream>
#include <string>
#include "Query_base.hpp"
#include "Query.hpp"

class BinaryQuery : public Query_base {
protected:
  BinaryQuery( Query left, Query right, std::string op ):
    lhs( left ), rhs( right ), oper( op ) { }
  std::ostream& display( std::ostream &os ) const
  { return os << "( " << lhs << " " << oper << " "
	      << rhs << " )"; }
  const Query lhs, rhs;
  const std::string oper;
};

#endif
  
