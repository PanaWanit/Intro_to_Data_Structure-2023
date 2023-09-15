#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, q;
	cin >> n >> q;
	vector<int> v(n);
	for(auto& x : v)
		cin >> x;
	sort(v.begin(), v.end());
	while(q--) {
		int s;
		cin >> s;
		bool flag = 0;
		for(int i = 0; i < n; i++) {
			int j = lower_bound(v.begin(), v.end(), s - v[i]) - v.begin();
			if(i != j && v[j] == s - v[i]) {
				flag = 1;
				break;
			}
		}
		cout << (flag ? "YES" : "NO") << "\n";
	}
	return 0;
}