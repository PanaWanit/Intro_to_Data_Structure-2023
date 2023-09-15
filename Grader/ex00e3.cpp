#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	set<int> s;
	bool flag = 1;
	for(int i = 0, x; i < n; i++)
		cin >> x, flag &= (1 <= x && x <= n), s.insert(x);

	cout << (((int)s.size() == n && flag) ? "YES" : "NO") << "\n";
	return 0;
}