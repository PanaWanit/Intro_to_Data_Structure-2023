#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
  if(mSize != other.mSize) return false;
  for(int i=0; i<(int)mSize; i++)
    if(mData[((int)mFront + i)%(int)mCap] != other.mData[((int)other.mFront + i)%(int)other.mCap]) return false;
  return true;
}

#endif