#ifndef __STUDENT_H_
#define __STUDENT_H_


#include<deque>
template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  remove_top(K);
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  std::deque<T> v; // use as std::queue but it can copy construct std::stack
  while(!empty() && K--)
    v.push_front(top()), pop();
  return std::stack<T>(v);
}

#endif
