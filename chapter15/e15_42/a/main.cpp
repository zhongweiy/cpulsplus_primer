#include <set>
#include <string>
#include <iostream>
#include <fstream>
#include "Query.hpp"
#include "TextQuery.hpp"
#include "AndQuery.hpp"
#include "OrQuery.hpp"
#include "NotQuery.hpp"

using namespace std;

/**
 * this is a trival test of Query, the User Interface of this test is ugly done...
 */
void usage( const string &name )
{
  cout << "\nUSAGE: " << name
       << " query word " << endl;
}

int main( int argc, char **argv )
{
  if( argc != 2 )
    {
      usage( argv[0] );
      return -1;
    }

  ifstream infile( "query_short.txt" );
  if ( !infile )
    {
      cout << "\ncan't open file query.txt" << endl;
      return -1;
    }
  TextQuery t;
  t.read_file( infile );

  Query q = Query( argv[1] );
  //Query q = Query( "in" ) & Query( "was" );
  //Query q = Query( "in" ) | Query( "was" );
  //Query q = ~Query( "in" );
  //Query q = ( Query( "in" ) & Query( "was" ) | ~Query( "Dickens" ) ) & Query( "Dickens" );
  cout << "\nyour query is: "
       << q << "\nyour query result is: " << endl;
  set<TextQuery::line_no> result = q.eval( t );
  for ( set<TextQuery::line_no>::iterator iter = result.begin();
	iter != result.end(); ++iter )
    cout << *iter << " ";
  cout << endl;

  return 0;
}
      
