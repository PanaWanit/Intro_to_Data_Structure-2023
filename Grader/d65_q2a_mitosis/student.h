#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
    int newSize = mSize + (b-a+1);
    if (newSize > mCap) expand(newSize);
    T* arr = new T[mCap]();
    for(int i=0,j=0; i<mSize; i++) {
        if( mSize-1-b<=i && i<=mSize-1-a) arr[j++] = mData[i];
        arr[j++] = mData[i];
    }
    delete [] mData;
    mData = arr;
    mSize = newSize;
}

#endif