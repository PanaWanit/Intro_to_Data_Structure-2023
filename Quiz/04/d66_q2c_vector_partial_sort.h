#ifndef __STUDENT_H_
#define __STUDENT_H_

//can include anything
#include<bits/stdc++.h>
using namespace std;

template <typename T>
template <typename CompareT>
void CP::vector<T>::partial_sort(std::vector<iterator> &pos,CompareT  comp) {
	int n = pos.size();
	std::vector<T> v;
	for(auto& x : pos)
		v.push_back(*x);
	sort(v.begin(), v.end(), comp);
	sort(pos.begin(), pos.end());
	for(int i=0; i<n; i++)
		*pos[i] = v[i];
}

#endif
