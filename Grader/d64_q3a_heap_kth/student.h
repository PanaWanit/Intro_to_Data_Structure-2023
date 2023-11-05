#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  std::vector<T> r;
  for(int i=0; i<(1<<k)-1; i++)
    r.push_back(mData[i]);
  std::sort(r.rbegin(), r.rend(), mLess);
  return r[k-1];
}

#endif
