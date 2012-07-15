#include "Bulk_item.hpp"

int main ()
{
  Bulk_item bitem1,bitem2(bitem1);
  Item_base item1(bitem1),item2(item1);
  
  bitem1 = bitem2;
  item1 = item2;

  return 0;
}
