#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  CP::vector<T> tmp;
  auto it = begin();
  for(; it != position; it++) tmp.push_back(*it);
  for(; first!=last; first++) tmp.push_back(*first);
  for(; it!=end(); it++) tmp.push_back(*it);
  *this = tmp;
}

#endif
