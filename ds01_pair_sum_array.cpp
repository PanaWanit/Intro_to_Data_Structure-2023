#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, q;
	cin >> n >> q;
	vector<int> v(n + 1), vis(2000001, 0);
	for(int i = 1; i <= n; i++)
		cin >> v[i], vis[v[i]] = i;
	while(q--) {
		int s;
		cin >> s;
		bool flag = 0;
		for(int i = 1; i <= n; i++) {
			if(s - v[i] >= 0 && i != vis[s - v[i]] && vis[s - v[i]]) {
				flag = 1;
				break;
			}
		}
		cout << (flag ? "YES" : "NO") << "\n";
	}
	return 0;
}