#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  k = std::min(int(mSize), k);
  for(int i=0; i<k; i++)
    res.push_back(mData[(int(mFront) + i)%int(mCap)]);
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from, iterator to) {
  mCap = to-from;
  mData = new T[mCap]();
  mSize = 0;
  mFront = 0;
  for(; from!=to; from++) push(*from);
}

#endif
