#ifndef __FOLDER_HPP
#define __FOLDER_HPP				
#include "Message.hpp"
#include <set>

class Message;

class Folder {
public:
  Folder() {}
  Folder(const Folder &);
  Folder& operator=(const Folder&);
  ~Folder();
  
  void addMsg(Message*);
  void remMsg(Message*);
  void save(Message&);
  void remove(Message&);
private:
  std::set<Message*> messagers;
  void put_Fld_in_messagers(const std::set<Message*>&);
  void rem_Fld_from_messagers();
		    
};
			    
#endif
