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
	int jump = int(mSize) / k;
	vector<int> block_size(k, jump);
	int left = (int)mSize % jump;
	for(int i=0; i<left; i++) block_size[i]++;

	int now=mSize-1;
	for(int i=0; i<k; i++) {
		for(int j=now-block_size[i]+1; j<=now; j++) output[i].push(mData[j]);
		now -= block_size[i];
	}

}

#endif
