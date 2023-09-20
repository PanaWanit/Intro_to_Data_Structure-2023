#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  int t = m>s2.size()?s2.size():m, new_sz=mSize+t, new_sz2=s2.size()-t;
  k = k>mSize?mSize:k;
  if(new_sz > mCap) expand(new_sz);
  for(int i = mSize - 1; i>=(int)mSize-k; i--) 
    mData[i+t] = mData[i];
  for(int i=mSize-k; t--; i++) 
    mData[i] = s2.mData[s2.size()-t-1];
  s2.mSize = new_sz2;
  mSize = new_sz;
}
#endif
