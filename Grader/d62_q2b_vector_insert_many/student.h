#ifndef __STUDENT_H_
#define __STUDENT_H_


#include<algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  std::sort(data.begin(), data.end());
  CP::vector<T> tmp;
  for(int i=0,j=0; i<=mSize; i++) {
    if(i == data[j].first) tmp.push_back(data[j].second), j++;
    if(i != mSize) tmp.push_back(mData[i]);
  }
  *this = tmp;
}

#endif
