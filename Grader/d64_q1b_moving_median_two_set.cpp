#include <bits/stdc++.h>
using namespace std;

set<pair<int, int>> r;
set<pair<int, int>, greater<pair<int, int>>> l;

inline void balance() {
	if(!l.empty() && l.size() >= r.size()) r.insert(*l.begin()), l.erase(l.begin());
	if(l.begin()->first > r.begin()->first) {
		pair<int, int> t1 = *l.begin(), t2 = *r.begin();
		l.erase(l.begin()), r.erase(r.begin());
		l.insert(t2), r.insert(t1);
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, w;
	cin >> n >> w;
	vector<int> v;
	for(int i = 0, x; i < w; i++) {
		cin >> x;
		v.push_back(x);
		l.insert({x, i});
		balance();
	}
	for(int i = w, x; i < n; i++) {
		cin >> x;
		v.push_back(x);
		l.insert({x, i});
		balance();
		cout << r.begin()->first << " ";
		// remove
		pair<int, int> e = {v[i - w], i - w};
		auto it = l.find(e);
		if(it != l.end()) {
			l.erase(it);
			if(!r.empty()) l.insert(*r.begin()), r.erase(r.begin());
			balance();
		}
		else {
			it = r.find(e);
			r.erase(it);
			if(!l.empty()) r.insert(*l.begin()), l.erase(l.begin());
			balance();
		}
	}
	cout << "\n";
	return 0;
}