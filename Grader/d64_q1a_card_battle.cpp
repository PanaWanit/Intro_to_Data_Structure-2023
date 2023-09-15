#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, q;
	int ans = 1;
	cin >> n >> q;
	multiset<int> m;
	while(n--) {
		int x;
		cin >> x;
		m.insert(x);
	}
	while(q--) {
		int n;
		cin >> n;
		while(n--) {
			int x;
			cin >> x;
			auto now = m.upper_bound(x);
			if(now == m.end()) {
				cout << ans << "\n";
				return 0;
			}
			m.erase(now);
		}
		ans += 1;
	}
	cout << ans << "\n";

	return 0;
}