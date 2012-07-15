#ifndef __CHECKOUTRECORD_HPP
#define __CHECKOUTRECORD_HPP

#include <string>
#include <utility>
#include <vector>

class CheckoutRecord {
public:
  std::string& operator[](const size_t);
  const std::string& operator[](const size_t) const;
private:
  double book_id;
  std::string title;
  Date date_borrowed;
  Date date_due;
  std::pair<std::string, std::string> borrower;
  std::vector< std::pair<std::string, std::string>* > wait_list; 
};
