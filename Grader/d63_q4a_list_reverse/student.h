#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  std::vector<T> t;
  for(auto it=a; it!=b; it++)
    t.push_back(*it);
  int c=t.size();
  auto aa = a;
  while(a != b)
    *a=t[--c], a++;
  return aa;
}

#endif
