#include "Message.hpp"

Message::Message(const Message &m):
  contents(m.contents), folders(m.folders)
{
  put_Msg_in_Folders(folders);
}

Message& Message::operater=(const Message &rhs)
{
  if (&rhs != this)
    {
      remove_Msg_from_Folders();
      contents = rhs.contents;
      folders = rhs.folders;
      put_Msg_in_Folders(rhs.folders);
    }
  return *this;
}

void Message::put_Msg_in_Folders(const set<Folder*> &rhs)
{
  for(std::set<Folder*>::const_iterator beg = rhs.begin();
      beg != rhs.end(); ++beg)
    {
      (*beg)->addMsg(this);
    }
}

void Message::remove_Msg_from_Folders()
{
  for(std::set<Folder*>::const_iterator beg = folders.begin();
      beg != folders.end(); ++beg)
    {
      (*beg)->remMsg(this);
    }
}
  
