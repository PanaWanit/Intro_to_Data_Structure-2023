#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>
#include <algorithm>

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    const int k = 4;
    while(idx > 0) {
        int p = (idx-1) / k;
        if(mLess(mData[idx], mData[p])) break;
        std::swap(mData[idx], mData[p]);
        idx = p;
    }
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    const int k = 4;
    while(idx*4+1 < mSize) {
        int argmax = std::max_element(mData + idx*k+1, std::min(mData + idx*k + k+1, mData + mSize), mLess) - mData;
        if(mLess(mData[argmax], mData[idx])) break;
        std::swap(mData[argmax], mData[idx]);
        idx = argmax;
    }
}

#endif

