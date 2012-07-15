#include "Item_base.hpp"
#include "Bulk_item.hpp"
#include <vector>
#include <iostream>
using namespace std;

int main (void)
{
  vector<Item_base> bvec;
  Bulk_item bk1("the christmas carol", 10, 6, 0.2);
  cout << "\nbk1: " 
       << "\n5: " << bk1.net_price(5)
       << "\n15: " << bk1.net_price(15) << endl;
  bvec.push_back(bk1);
  cout << "\nbvec: "
       << "\n5: " << bvec.begin()->net_price(5)
       << "\n15: " << bvec.begin()->net_price(15) << endl;

  return 0;
}
