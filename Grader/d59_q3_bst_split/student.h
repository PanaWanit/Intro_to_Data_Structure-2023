#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  CP::map_bst<KeyT,MappedT,CompareT> result;

  node* ptr = result.mRoot;
  node* run = mRoot;

  using namespace std;
  while(run != NULL) {
    if(mLess(run->data.first, val)) {
      run=run->right;
    } else {
      node* next = run->left;

      if(run == mRoot)
        mRoot = run->left;

      if(run->left != NULL)
        run->left->parent = run->parent;

      if(run->parent != NULL)
        run->parent->right = run->left;

      run->left = NULL;

      if(ptr==NULL) result.mRoot = ptr = run, run->parent = NULL;
      else ptr->left = run, run->parent = ptr, ptr=ptr->left;

      run=next;
    }
  }
  return result;
}

#endif
