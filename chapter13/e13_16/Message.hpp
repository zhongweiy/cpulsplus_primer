#include <set>
#include "Folder.hpp"
#include <string>

class Message {
public:
  Message(const std::string &str = ""):
    content(str) {}
  Message(const Message&);
  Message& operator=(const Message&);
  ~Message();

  void save(Folder&);
  void remove(Folder&);
  
private:
  std::string content;
  std::set<Folder*> folders;
  //utility function
  void put_Msg_in_Folders(const std::set<Folder*>&);
  void remove_Msg_from_Folders();
};
