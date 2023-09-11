#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	map<pair<string, string>, bool> mp;
	while(n--) {
		string a,b;
		cin >> a >> b;
		mp[make_pair(a,b)] = 1;
	}
	while(m--) {
		cin >> n;
		bool ans = true;
		vector<pair<string,string>> v;
		while(n--) {
			string a,b;
			cin >> a >> b;
			auto p = make_pair(a, b);
			if(mp.count(p)) v.push_back(p);
			else ans = false;
		}
		if(ans) for(auto& x : v) mp.erase(x);
		cout << (ans?"YES":"NO") << "\n";
	}
	return 0;
}
