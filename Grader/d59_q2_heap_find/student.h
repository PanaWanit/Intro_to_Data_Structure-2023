#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <algorithm>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  return std::find(mData, mData+mSize, k) != mData+mSize;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  if(!find(k)) return -1;
  int i=mSize-1;
  for(;i>=0 && mData[i]!=k; i--);
  return __lg(i+1);
}

#endif

