#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, w;
	cin >> n >> w;
	// w--;  // for CSES Sliding Median
	multiset<int> s;
	queue<int> q;
	for(int i = 0, x; i < w + 1; i++) {
		cin >> x;
		q.push(x);
		s.insert(x);
	}
	auto it = s.begin();
	for(int i = 0; i < w / 2; i++)
		it++;
	cout << *it << " ";
	for(int i = w + 1, x; i < n; i++) {
		cin >> x;
		q.push(x);
		int del = q.front();
		q.pop();
		if(del == x) {
			cout << *it << " ";
			continue;
		}
		auto now = s.upper_bound(del);
		now--;
		if(now == it) {	 // *it == del && has only *it in mset
			s.insert(x);
			if(x > *it)
				it++;
			else
				it--;
			s.erase(now);
		}
		else if((x < *it && del < *it) || (x >= *it && del >= *it)) {
			s.insert(x);
			s.erase(now);
		}
		else if(x < *it && del >= *it) {
			s.insert(x);
			s.erase(now);
			it--;
		}
		else if(x >= *it && del < *it) {
			s.insert(x);
			s.erase(now);
			it++;
		}
		else
			assert(false);
		cout << *it << " ";
	}
	cout << "\n";
	return 0;
}