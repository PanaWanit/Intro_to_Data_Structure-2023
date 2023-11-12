#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it, size_t pos) {
  CP::list<T> result;
  if(pos == mSize) return result;

  result.mSize = mSize-pos;
  mSize = pos;

  auto ed = it.ptr->prev;
  result.mHeader->next = it.ptr;
  it.ptr->prev = result.mHeader;
  mHeader->prev->next = result.mHeader;
  result.mHeader->prev = mHeader->prev;

  ed->next = mHeader;
  mHeader->prev = ed;

  
  return result;
}

#endif
