#include "BinStrTree.hpp"
#include "TreeNode.hpp"

BinStrTree& BinStrTree::operator=(const BinStrTree& B)
{
  delete root;
  root = new TreeNode(*B.root);
  return *this;
}
