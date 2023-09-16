#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
    using std::vector;
    ensureCapacity(mSize + value.size());
    if(index == (int)mSize-1) {
      mData.push_back(value);
      mSize += value.size();
      return;
    }
    int i = std::upper_bound(aux.begin(), aux.end(), index) - aux.begin();
    if (i > 0) index -= aux[i - 1];
    if(index == 0) {
      mData.insert(mData.begin() + i, value);
      aux.push_back(0);
    }
    else {
      vector<vector<T>> to_insert;
      to_insert.push_back(vector<T>(mData[i].begin(), mData[i].begin()+index));
      to_insert.push_back(value);
      to_insert.push_back(vector<T>(mData[i].begin()+index, mData[i].end()));
      mData.erase(mData.begin()+i);
      mData.insert(mData.begin() + i, to_insert.begin(), to_insert.end());
      aux.push_back(0), aux.push_back(0);
    }

    for(; i<aux.size(); i++)
      aux[i] = aux[i-1] + mData[i].size();
    mSize += value.size();

}

#endif