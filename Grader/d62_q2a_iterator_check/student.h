#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  return it-mData < mSize; // use mData instead begin(); vector.h doesn't have iterator begin() const {}
}

#endif
