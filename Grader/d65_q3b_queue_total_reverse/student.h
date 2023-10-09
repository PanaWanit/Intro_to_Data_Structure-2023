#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse() {
  aux ^= 1;
}

template <typename T>
const T& CP::queue<T>::front() const {
  int f = mFront, c = mCap, sz = mSize;
  int front = !aux ? f : (f + sz - 1) % c;
  return mData[front];
}

template <typename T>
const T& CP::queue<T>::back() const {
  int f = mFront, c = mCap, sz = mSize;
  int back = aux ? f : (f + sz - 1) % c;
  return mData[back];
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  ensureCapacity(mSize + 1);

  int f = mFront, c = mCap, sz = mSize;
  int idx;
  if(!aux) idx = (f + sz)%c;
  else mFront = idx = (f - 1 + c)%c;
  mData[idx] = element;
  mSize++;
}

template <typename T>
void CP::queue<T>::pop() {
  int f = mFront, c = mCap, sz = mSize;
  if(!aux) mFront = (f + 1) % c;
  mSize--;
}

#endif