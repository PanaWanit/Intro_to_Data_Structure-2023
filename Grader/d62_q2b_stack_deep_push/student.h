#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  int idx = mSize - pos;
  push(0);
  for(int i = mSize-2; i>=idx; i--) mData[i+1] = mData[i];
  mData[idx] = value;
}

#endif
