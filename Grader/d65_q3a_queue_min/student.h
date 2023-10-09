#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  std::vector<T> v; v.reserve(pos.size());
  for(auto& x : pos)
    if(x < mSize) v.push_back(mData[(int(mFront) + (int)x) % int(mCap)]);
  return *std::min_element(v.begin(), v.end(), comp);
}

#endif
