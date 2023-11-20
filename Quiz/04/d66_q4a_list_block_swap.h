#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "list.h"
#include<bits/stdc++.h>

template <typename T>
void CP::list<T>::block_swap(iterator a1, iterator a2, iterator b1, iterator b2) {
    // this is not a proper solution (take O(n) time and space)
    // full score (b/c there is no mutiple swap in one query)
    // just use pointer btw
	using namespace std;
	vector<T> v1, v2;
    // ^ can't new node; not a problem lmao.
	for(auto it = a1; it!=a2; it++)
		v1.push_back(*it);
	for(auto it = b1; it!=b2; it++)
		v2.push_back(*it);
	vector<T> v;
	int starta,enda, startb, endb, i=0;
	for(auto it=begin(); it!=end(); it++, i++) {
		v.push_back(*it);
		if(it == a1) starta = i;
		if(it == a2) enda = i;
		if(it == b1) startb = i;
		if(it == b2) endb = i;
	}
	if(starta > startb) swap(starta, startb), swap(enda, endb), swap(v1, v2);
    // ^ to prevent decreasing of i while looping
	vector<T> ans;
	for(int i=0; i<v.size(); i++) {
		if(i==starta) {
			for(auto& x : v2) ans.push_back(x);
			if(starta!=enda) i = enda-1;
			else ans.push_back(v[i]);
		}
		else if(i==startb) {
			for(auto& x: v1) ans.push_back(x);
			if(startb!=endb) i = endb-1;
			else ans.push_back(v[i]);
		}
		else ans.push_back(v[i]);
	}
	i=0;
	for(auto it=begin(); it!=end(); it++, i++) 
		*it = ans[i];
}

#endif



