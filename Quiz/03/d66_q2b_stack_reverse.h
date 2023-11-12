#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	last = last > (int)mSize-1 ? last = (int)mSize - 1 : last;
	T tmp[mSize];
	int cnt=0;
	for(int i = (int)mSize - (int)last - 1; i<=(int)mSize-(int)first-1; i++)
		tmp[cnt++] = mData[i];
	int tcnt = cnt;
	for(int i=0; i<tcnt; i++)
		mData[(int)mSize+i-last-1] = tmp[--cnt];

}

#endif
