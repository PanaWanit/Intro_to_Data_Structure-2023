#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  for(; a!=b; a++) {
    if(*a!=value) continue; 

    auto nx = a.ptr->next, pv = a.ptr->prev;
    pv->next = nx;
    nx->prev = pv;
    --mSize;

    ++output.mSize;
    output.mHeader->next = output.mHeader->next->prev = new node(value, output.mHeader, output.mHeader->next);
  }
}

#endif
