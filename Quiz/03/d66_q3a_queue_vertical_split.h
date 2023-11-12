#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

using namespace std;

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  	int sz = int(mSize) / (int)k;
  	vector<int> v(k, sz);
  	for(int i=0; i<(int)mSize % (int)k; i++)
		  v[i] ++;
	int sum = 0;
	output.resize(k);
	for(int i=0; i<k; i++) {
		for(int j=sum; j<sum+v[i]; j++)
			output[i].push(mData[(mFront + j) % int(mCap)]);
		sum += v[i];
	}

}

#endif
