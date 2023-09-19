#ifndef __STUDENT_H_
#define __STUDENT_H_

#include"vector-sm.h"
#include<bits/stdc++.h>
#define sz(x) (int)(x).size()
int c=1875;
template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
	int i = std::upper_bound(aux.begin(), aux.end(), index)-aux.begin();
	i?index-=aux[i-1]:0;
	if(i==sz(mData)) mData.push_back(value);
	else {
		mData[i].insert(mData[i].begin()+index, value.begin(), value.end());
		if(sz(mData[i]) > c) {
			mData.insert(mData.begin()+i+1, std::vector<T>(mData[i].begin()+c, mData[i].end()));
			while(sz(mData[i])>c) mData[i].pop_back();
		}
	}
	for(aux.resize(sz(mData)); i<sz(mData); i++) aux[i] = (i?aux[i-1]:0) + sz(mData[i]);
	mSize=mCap=aux.back();
}
#endif
