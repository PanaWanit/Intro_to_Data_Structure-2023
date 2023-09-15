#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<set>

using namespace std;

const int INF = 2e9;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	map<int, bool> is_somchai;
	for(int i=0,x; i<n; i++) cin >> x, is_somchai[x] = true;
	map<int, int> mp;
	set<pair<int,int>> s;

	while(m--) {
		int o;
		cin >> o;
		if(o==1) {
			int a,b;
			cin >> a >> b;
			if(!is_somchai.count(a)) continue;
			auto it = s.find({mp[a], a});
			if(it != s.end()) s.erase(it);
			mp[a] += b;
			s.insert({mp[a], a});
		}
		else {
			int k;
			cin >> k;

			auto it = s.lower_bound({k, -INF});
			if(it == s.begin()) cout << "NONE\n";
			else cout << (--it)->second << "\n";
		}
	}
	return 0;
}