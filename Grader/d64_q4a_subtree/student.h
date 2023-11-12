#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  if(n==NULL) return 0;
  return 1 + process(n->left) + process(n->right);
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  if(empty()) return std::pair<KeyT,MappedT>();
  left.clear(), right.clear();
  right.mRoot = copy(mRoot->right, NULL);
  left.mRoot = copy(mRoot->left, NULL);

  right.mSize = process(mRoot->right);
  left.mSize = process(mRoot->left);
  mSize = 1;

  delete_all_nodes(mRoot->left);
  delete_all_nodes(mRoot->right);
  mRoot->left = mRoot->right = NULL;
  return mRoot->data;
}

#endif

