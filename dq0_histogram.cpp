#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int q;
	cin >> q;
	map<string, int> mp;
	while(q--) {
		string s;
		cin >> s;
		mp[s]++;
	}
	for(auto& [key, val] : mp) {
		if(val > 1) cout << key << " " << val << "\n";
	}
	return 0;
}