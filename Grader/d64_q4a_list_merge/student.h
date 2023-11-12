#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for(auto& l : ls) {
    if(l.empty()) continue;

    auto first = l.begin().ptr, last = l.end().ptr->prev;

    last->next = mHeader;
    first->prev = mHeader->prev;
    mHeader->prev->next= first;
    mHeader->prev = last;

    mSize += l.size();
    l.mHeader->next = l.mHeader->prev = l.mHeader;
    l.mSize = 0;
  }
}

#endif
