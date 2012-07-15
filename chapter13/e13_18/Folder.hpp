#include "Message.hpp"
#include <set>

#ifndef __FOLDER_HPP
#define __FOLDER_HPP

class Folder {
public:
  Folder() {}
  Folder(const Folder &);
  Folder& operater= (const Folder&);
  ~Folder();
    
  addMsg(Message*);
  remMsg(Message*);
private:
  std::set<Message*> messagers;
  void put_Fld_in_messagers(const std::set<Message*>&);
  void rem_Fld_from_messagers();
		    
}
			    
#endif
