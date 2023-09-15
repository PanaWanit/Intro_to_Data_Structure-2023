#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(auto& x : a)
		cin >> x;
	for(auto& x : b)
		cin >> x;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	vector<int> ans{-2000000000};
	for(auto& x : a) {
		if(find(b.begin(), b.end(), x) != b.end()) ans.push_back(x);
	}
	for(int i = 1; i < (int)ans.size(); i++) {
		if(ans[i] != ans[i - 1]) cout << ans[i] << " ";
	}
	cout << '\n';
	return 0;
}