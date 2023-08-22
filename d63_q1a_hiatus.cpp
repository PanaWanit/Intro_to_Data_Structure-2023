#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, q;
	cin >> n >> q;
	vector<pair<int, int>> v;
	v.emplace_back(-1, -1);
	for(int i = 0, a, b; i < n; i++)
		cin >> a >> b, v.emplace_back(a, b);
	sort(v.begin(), v.end());
	while(q--) {
		pair<int, int> p;
		cin >> p.first >> p.second;
		auto i = upper_bound(v.begin(), v.end(), p) - 1;
		if(*i == p)
			cout << "0 0 ";
		else
			cout << i->first << " " << i->second << " ";
	}
	return 0;
}