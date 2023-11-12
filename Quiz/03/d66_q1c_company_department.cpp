#include<bits/stdc++.h>
using namespace std;

int main( ){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	map<string, set<string>> mp;
	map<string, string> rvmp;
	while(n--) {
		string a,b;
		cin >> a >> b;
		mp[b].insert(a);
		rvmp[a] = b;
	}
	while(m--) {
		int o;
		cin >> o;
		if(o==1) {
			string a, to;
			cin >> a >> to;
			string dep = rvmp[a];
			rvmp[a] = to;
			mp[dep].erase(a);
			mp[to].insert(a);
		}
		else {
			string from, to;
			cin >> from >> to;
			for(auto& x : mp[from])
				rvmp[x] = to, mp[to].insert(x);
			mp.erase(from);
		}
	}
	for(auto& x : mp) {
		cout << x.first << ": ";
		for(auto& y : x.second)
			cout << y << " ";
		cout << "\n";
	}
	return 0;
}
