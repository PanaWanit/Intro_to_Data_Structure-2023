#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

#define idx(x) (int(mFront+(x)))%(int)mCap

template <typename T>
void CP::queue<T>::move_to_back(size_t p) {
  T t = mData[idx(p)];
  for(int i=p+1; i<mSize; i++)
    mData[idx(i-1)] = mData[idx(i)];
  mData[idx(mSize-1)]=t;
}

#endif
