#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	map<string, int> mp;
	int q;
	string x;
	cin >> q;
	while(q--)
		cin >> x, mp[x]++;
	int mx = 0;
	string key;
	for(auto& [k, val] : mp)
		if(val >= mx) mx = val, key = k;
	cout << key << " " << mx << "\n";
	return 0;
}