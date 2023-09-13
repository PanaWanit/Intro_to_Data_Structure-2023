#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  CP::vector<T> tmp;
  auto it = pos.begin();
  for(size_t i=0; i<mSize; i++)  {
    if(it!=pos.end() && *it == i) it++;
    else tmp.push_back(mData[i]);
  }
  *this = tmp;
}

#endif
