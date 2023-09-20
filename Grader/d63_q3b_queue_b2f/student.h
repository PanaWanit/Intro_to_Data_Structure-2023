#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  int i = (mFront + mCap - 1) % mCap;
  mData[i] = back();
  mFront = i;
}

#endif
