#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  int c=mCap, sz=mSize; // size_t problem
  idx = (idx%sz+sz)%sz;
  return mData[(mFront + idx)%c];
}

#endif
