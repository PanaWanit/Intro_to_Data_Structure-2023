#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	cout << fixed << setprecision(2);
	int n;
	cin >> n;
	map<string, pair<int, int>> mp, t;
	while(n--) {
		string s, a;
		int d;
		cin >> s >> a >> d;
		t[a] = make_pair(t[a].first + d, t[a].second + 1);
		mp[s] = make_pair(mp[s].first + d, mp[s].second + 1);
	}
	for(auto& [sub, p] : mp) {
		int score, cnt;
		tie(score, cnt) = p;
		cout << sub << " " << 1.0 * score / cnt << "\n";
	}
	for(auto& [sub, p] : t) {
		int score, cnt;
		tie(score, cnt) = p;
		cout << sub << " " << 1.0 * score / cnt << "\n";
	}
	return 0;
}