#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"
#include<bits/stdc++.h>

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t kk) const {
	using namespace std;
	int k = kk; // get out
	output.resize(k);
	k = min((int)mSize, k);
	int sz = (int)mSize / k;
	int additional = (int)mSize % k;

	int now=mSize-1;
	for(int i=0; i<k; i++) {
		int now_jump = sz + (i < additional);
		for(int j=now-now_jump+1; j<=now; j++) output[i].push(mData[j]);
		now -= now_jump;
	}

}

#endif
