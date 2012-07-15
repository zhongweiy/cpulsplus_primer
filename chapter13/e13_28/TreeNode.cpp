#include "TreeNode.hpp"

TreeNode& TreeNode::operator=(const TreeNode& T)
{
  delete right;
  delete left;
  right = new TreeNode(*T.right);
  left = new TreeNode(*T.left);
  value = T.value;
  count = T.count;

  return *this;
}
