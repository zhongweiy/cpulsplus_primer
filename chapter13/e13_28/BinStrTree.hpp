#ifndef __BINSTRTREE_HPP
#define __BINSTRTREE_HPP

#include "TreeNode.hpp"

class BinStrTree {
public:
  BinStrTree() : root(NULL) { }
  BinStrTree(const BinStrTree& B): root( new TreeNode(*B.root) ) { }
  BinStrTree& operator=(const BinStrTree& );
  ~BinStrTree() { delete root; }
private:
  TreeNode *root;
};
#endif
