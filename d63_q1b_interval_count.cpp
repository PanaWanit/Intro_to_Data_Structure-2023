#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, q, k;
	cin >> n >> q >> k;
	vector<int> v(n);
	for(auto& x : v)
		cin >> x;
	sort(v.begin(), v.end());
	while(q--) {
		int p;
		cin >> p;
		cout << upper_bound(v.begin(), v.end(), p + k) - lower_bound(v.begin(), v.end(), p - k) << " ";
	}
	return 0;
}