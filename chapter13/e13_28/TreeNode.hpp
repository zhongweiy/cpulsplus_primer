#ifndef __TREENODE_HPP
#define __TREENODE_HPP

#include <string>

class TreeNode {
public:
  TreeNode():count(0), left(NULL), right(NULL) { }
  TreeNode(const TreeNode& T): value(T.value), count(T.count), left(new TreeNode(*left)), right(new TreeNode(*right)) { }
  TreeNode& operator=(const TreeNode&);
  ~TreeNode(){ delete left; delete right; }
private:
  std::string value;
  int count;
  TreeNode *left;
  TreeNode *right;
};

#endif
