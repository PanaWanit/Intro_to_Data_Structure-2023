#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#define idx(pos) mFront + (pos) < mCap ? mFront + (pos) : mFront + (pos) - mCap
template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    T t = mData[idx(pos)];
    while(pos--)
        mData[idx(pos+1)] = mData[idx(pos)];
    mData[idx(0)] = t;
}

#endif
