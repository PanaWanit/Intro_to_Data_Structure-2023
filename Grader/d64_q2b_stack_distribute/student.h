#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  int sz = (mSize + k - 1) / k; // ceil(mSize/k)
  int b = (sz - mSize % sz)%sz; // number element that size = floor(mSize/k);
  std::vector<std::vector<T>> ans(k, std::vector<T>(sz));
  int p = mSize-1, j=0, cur, i;
  while(k--) {
    cur=sz-(k+1<=b),i=0;
    while(cur--) 
      ans[j][i++]=(mData[p--]);
    j++;
  }
  return ans;
}
#endif
