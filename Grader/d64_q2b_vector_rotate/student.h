#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  int size = last - first, j=0;
  if(k==0 || size == 0) return;
  T tmp[size];
  for(auto i=first+k; i!=last; i++) tmp[j++] = *i;
  for(auto i=first; i!=first+k; i++) tmp[j++] = *i;
  for(j=0; first!=last; first++) *first = tmp[j++];
}

#endif
