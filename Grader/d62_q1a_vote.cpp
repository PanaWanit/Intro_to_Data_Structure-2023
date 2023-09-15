#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	map<string, int> mp;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		mp[s]++;
	}
	vector<int> v;
	for(auto& [key, val] : mp)
		v.push_back(val);
	sort(v.begin(), v.end(), greater<int>());
	cout << v[min((int)v.size() - 1, k - 1)] << "\n";
	return 0;
}