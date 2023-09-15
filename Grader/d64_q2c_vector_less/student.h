#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  for(int i=0; i<std::min(size(), other.size()); i++) 
    if(mData[i] != other[i]) return mData[i] < other[i];
  return size() < other.size();
}

#endif
