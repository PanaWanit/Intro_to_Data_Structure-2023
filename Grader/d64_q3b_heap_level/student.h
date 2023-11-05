#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  std::vector<T> r;
  int start = (1 << k) - 1, end = (1 << (k+1)) - 2;
  for(int i=start; i<=std::min(end, (int)mSize-1); i++)
    r.push_back(mData[i]);
  std::sort(r.rbegin(), r.rend(), mLess);
  return r;
}

#endif

