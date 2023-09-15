#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	map<int, bool> mp, mpb;
	for(int i = 0, x; i < n; i++)
		cin >> x, mp[x] = 1;
	for(int i = 0, x; i < m; i++)
		cin >> x, mpb[x] = 1;
	for(auto& [key, val] : mp)
		if(mpb.count(key)) cout << key << " ";
	cout << "\n";
	return 0;
}