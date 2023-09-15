#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  CP::vector<int> t(*this);
  ensureCapacity(2*mSize);
  T* it = t.end();
  T* i = end();
  do {
    --it;
    *i = *it;
    i++;
  } while(it != t.begin());
  mSize *= 2;
}

#endif
