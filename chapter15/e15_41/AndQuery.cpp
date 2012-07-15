#include <set>
#include <algorithm>
#include <iterator>
#include "AndQuery.hpp"
#include "TextQuery.hpp"

std::set<TextQuery::line_no>
AndQuery::eval( const TextQuery& file ) const
{
  std::set<line_no> left = lhs.eval( file ),
    right = rhs.eval( file );
  std::set<line_no> ret_lines;
  std::set_intersection( left.begin(), left.end(),
			 right.begin(), right.end(),
			 std::inserter( ret_lines, ret_lines.begin() ) );
  return ret_lines;
}
