#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	map<ll, ll> mp;
	int n, m;
	cin >> n >> m;
	ll f, s;
	for(int i = 0; i < n; i++) {
		cin >> f >> s;
		mp[s] = f;
	}
	while(m--) {
		ll a, b;
		cin >> a >> b;
		if(a == b || !mp.count(a) || !mp.count(b) || !mp.count(mp[a]) || !mp.count(mp[b]) || mp[mp[a]] != mp[mp[b]]) {
			cout << "NO\n";
		}
		else
			cout << "YES\n";
	}
	return 0;
}