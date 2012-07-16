#ifndef TEXTQUERY_H
#define TEXTQUERY_H
#include <string>
#include <set>
#include <vector>
#include <map>
#include <fstream>

class TextQuery {
  public:
    typedef std::set<std::string>::size_type line_no;
    void read_file(std::ifstream &is)
    { store_file(is); build_map(); }
    std::set<line_no> run_query(const std::string&) const;
    std::string text_line(line_no) const;
  line_no size( void ) const { return lines_of_text.size(); }
  
  private:
    void store_file(std::ifstream&);
    void build_map();
    std::vector<std::string> lines_of_text;
    std::map< std::string, std::set<line_no> > word_map;
};
#endif
 
