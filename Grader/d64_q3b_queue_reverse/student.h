#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  T tmp[b-a+1];
  auto it = tmp;
  for(int i=a; i<=b; i++)
    *(it++) = mData[(mFront+i)%mCap];
  for(int i=a; i<=b; i++)
    mData[(mFront+i)%mCap] = *(--it);
}

#endif
