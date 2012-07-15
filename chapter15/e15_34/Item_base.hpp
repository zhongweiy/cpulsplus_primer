#ifndef __ITEM_BASE_HPP
#define __ITEM_BASE_HPP
#include <string>
#include <iostream>
using namespace std;

class Item_base {
public:
  Item_base(const std::string &book = "",
	    double sales_price = 0.0):
    isbn(book), price(sales_price), debug_on_off(0) { }
  
  std::string book() const { return isbn; }
  
  virtual double net_price(std::size_t n) const
  { return n * price; }
  
  virtual Item_base* clone(void) const
  { return new Item_base(*this); }

  virtual void debug (void) const
  {
    if (debug_on_off == 1)
      std::cout << "isbn: " << isbn
		<< " price: " << price
		<< " debug_on_off: " << debug_on_off
		<< std::endl;
  }

  void debug_on(bool s) { debug_on_off = s; }
    
  virtual ~Item_base() { }
  
private:
  std::string isbn;
  
protected:
  double price;
  bool debug_on_off;
};
#endif
