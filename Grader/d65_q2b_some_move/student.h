#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

#include<cassert>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
	using namespace std;
	int i = upper_bound(aux.begin(), aux.end(), index) - aux.begin();
	assert(i!=0); //bruh -> not exist got [PPP](100) ???
	if(i>0) index -= aux[i-1];
	vector<vector<T>> ins;
	vector<T>& v=mData[i];
	if(index) ins.push_back(vector<T>(v.begin(), v.begin()+index)), aux.push_back(0);
	ins.push_back(value);
	if(index) ins.push_back(vector<T>(v.begin()+index, v.end())), mData.erase(mData.begin()+i);
	mData.insert(mData.begin() + i, ins.begin(), ins.end()), aux.push_back(0);

	for(; i<mData.size(); i++) aux[i] = (i>0?aux[i-1]:0) + mData[i].size();
	mSize = mCap = aux.back();

}

#endif