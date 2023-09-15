#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, m, l;
	cin >> n >> m >> l;
	vector<int> hsh(l);
	for(auto& x : hsh)
		cin >> x;
	map<string, bool> mp;
	while(n--) {
		string s;
		cin >> s;
		mp[s] = 1;
	}
	while(m--) {
		string s;
		cin >> s;
		for(int i = 0; i < l; i++)
			s[i] = char((s[i] - 'a' + hsh[i]) % 26 + 'a');
		cout << (mp.count(s) ? "Match\n" : "Unknown\n");
	}
	return 0;
}