#include "Bulk_limited_item.hpp"
#include "Item_base.hpp"
#include <iostream>

int main (void)
{
  Item_base ib;
  Bulk_limited_item bli;

  ib.debug_on(false);
  bli.debug_on(false);
  cout << "\nbefore debug on:" << endl;
  cout << "\nrun Item_base's debug" << endl;
  ib.debug();
  cout << "\nrun Bulk_limited_item's debug" << endl;
  bli.debug();

  cout << "\nafter debug on:" << endl;
  ib.debug_on(true);
  bli.debug_on(true);
  cout << "\nrun Item_base's debug" << endl;
  ib.debug();
  cout << "\nrun Bulk_limited_item's debug" << endl;
  bli.debug();

  return 0;
}
