#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  std::vector<std::vector<T>> ans;
  for(int i=0; i<k; i++) {
    std::vector<T> v;
    for(int j=i; j<mSize; j+=k)
      v.push_back(mData[mSize - 1 - j]);
    std::reverse(v.begin(), v.end());
    ans.push_back(v);
  }
  return ans;
}

#endif