#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"
#include<bits/stdc++.h>
using namespace std;

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  function<bool(int)> dfs = [&](int u) {
    bool ans = true;
    if(2*u+1 < mSize) ans &= mLess(mData[2*u+1], mData[u]) & dfs(2*u+1);
    if(2*u+2 < mSize) ans &= mLess(mData[2*u+2], mData[u]) & dfs(2*u+2);
    return ans;
  };
  return dfs(0);
}

#endif