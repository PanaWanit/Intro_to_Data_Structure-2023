#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include<bits/stdc++.h>

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges) {
	using namespace std;
	vector<int> qs(mSize+2);
	for(auto& [first, second] : ranges) {
		int l = first-begin()+1;
		int r = second - begin()+1;
		qs[l]++, qs[r]--;
	}
	CP::vector<T> tmp;
	for(int i = 1; i<=mSize; i++) {
		qs[i] += qs[i-1];
		if(!qs[i]) tmp.push_back(mData[i-1]);
	}
	*this = tmp;

}

#endif
