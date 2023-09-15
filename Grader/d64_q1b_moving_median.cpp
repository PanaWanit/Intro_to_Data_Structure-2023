#include <bits/stdc++.h>
using namespace std;

multiset<int> s;
queue<int> q;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, w;
	cin >> n >> w;
	for(int i = 0, x; i < w + 1; i++) {
		cin >> x;
		q.push(x), s.insert(x);
	}
	auto it = next(s.begin(), w/2); // median start at w/2+1
	cout << *it << " ";
	for(int i = w + 1, x; i < n; i++) {
		cin >> x;
		q.push(x);
		int del = q.front();
		q.pop();
		if(del == x) {	// remove and add same element
			cout << *it << " ";
			continue;
		}
		auto now = --s.upper_bound(del); // find the right most element to delete
		if(now == it) {	 // no duplicate median && remove it
			s.insert(x);
			if(x > *it) it++;
			else it--;
			s.erase(now);
			cout << *it << " ";
			continue;
		}
		s.insert(x);
		s.erase(now);
		// remove either both left side or right side the median => the median won't move
		if(x < *it && del >= *it) it--;
		else if(x >= *it && del < *it) it++;
		cout << *it << " ";
	}
	cout << "\n";
	return 0;
}