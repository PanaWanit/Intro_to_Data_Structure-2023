#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  int c=0;
  for(auto i=first; i!=last; i++, c++);
  mData = new T[c]();
  mCap = c;
  mSize = c;
  for(int i=0; i<c; i++, first++) mData[c-i-1] = *first;

}

#endif
