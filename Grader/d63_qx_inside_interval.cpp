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
		int x;
		cin >> x;
		auto i = upper_bound(v.begin(), v.end(), make_pair(x, 2000000000)) - 1;
		cout << "01"[i->first <= x && x <= i->second] << " ";
	}
	cout << "\n";
	return 0;
}