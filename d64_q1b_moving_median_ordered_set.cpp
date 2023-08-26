#include <bits/stdc++.h>
using namespace std;

// Cheat Mode
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	oset<pair<int, int>> s;
	int n, w;
	cin >> n >> w;
	vector<int> v(n);
	for(auto& x : v)
		cin >> x;
	for(int i = 0; i < w; i++)
		s.insert({v[i], i});
	for(int i = w; i < n; i++) {
		s.insert({v[i], i});
		cout << s.find_by_order(w / 2)->first << " ";
		s.erase(s.find({v[i - w], i - w}));
	}
	cout << "\n";
	return 0;
}