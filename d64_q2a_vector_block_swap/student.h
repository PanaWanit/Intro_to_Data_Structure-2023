#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  if(m<=0 || abs(a-b)<m ||  (a >= end() || a < begin()) || (b >= end() || b < begin()) || a+m-1 >= end() || b+m-1 >= end() ) return false;
  for(int i=0; i<m; i++)
    std::swap(*(a+i), *(b+i));
  return true;
}

#endif
