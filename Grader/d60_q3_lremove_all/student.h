#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  for(auto it = begin(); it!=end(); it++) {
    if(*it != value) continue;
    it.ptr->prev->next = it.ptr->next;
    it.ptr->next->prev = it.ptr->prev;
    auto tmp = it.ptr->next;
    delete it.ptr;
    it = iterator(tmp->prev);
    mSize--;
  }
}

#endif
