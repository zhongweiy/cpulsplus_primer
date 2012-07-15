#ifndef __MESSAGE_HPP
#define __MESSAGE_HPP				
						
#include <set>
#include "Folder.hpp"
#include <string>

class Message {
public:
  Message(const std::string &str = ""):
    contents(str) {}
  Message(const Message&);
  Message& operator=(const Message&);
  ~Message();

  void save(Folder&);
  void remove(Folder&);
  void addFldr(Folder*);
  void remFldr(Folder*);
  
private:
  std::string contents;
  std::set<Folder*> folders;
  //utility function
  void put_Msg_in_Folders(const std::set<Folder*>&);
  void remove_Msg_from_Folders();
};

#endif
