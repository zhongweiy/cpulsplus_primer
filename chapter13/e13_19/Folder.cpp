#include "Message.hpp"
#include "Folder.hpp"

Folder::Folder(const Folder &f):
  messagers(f.messagers)
{
  put_Fld_in_messagers(messagers);
}

Folder& Folder::operator= (const Folder& rhs)
{
  if (&rhs != this)
    {
      rem_Fld_from_messagers();
      messagers = rhs.messagers;
      put_Fld_in_messagers(rhs.messagers);
    }
  return *this;
}

Folder::~Folder()
{
  rem_Fld_from_messagers();
}

void Folder::addMsg(Message* m)
{
  messagers.insert(m);
}

void Folder::remMsg(Message* m)
{
  messagers.erase(m);
}

void Folder::save(Message &msg)
{
  addMsg(&msg);
  msg.addFldr(this);
}

void Folder::remove(Message &msg)
{
  remMsg(&msg);
  msg.remFldr(this);
}

void Folder::put_Fld_in_messagers(const std::set<Message*>& m)
{
  for (std::set<Message*>::const_iterator beg = m.begin();
       beg != m.end(); ++beg)
    {
      (*beg)->addFldr(this);
    }
}

void Folder::rem_Fld_from_messagers()
{
  for (std::set<Message*>::const_iterator beg = messagers.begin();
       beg != messagers.end(); ++beg)
    {
      (*beg)->remFldr(this);
    }
}

Message::~Message()
{
  remove_Msg_from_Folders();
}
