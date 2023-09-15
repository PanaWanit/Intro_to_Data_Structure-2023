#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,f; cin >> n >> m;
	vector<pair<string,int>> v(n);
	string a,b;
	for(auto& x : v) cin >> a >> b, x={a+"-"+b,1};
	sort(all(v));
	while(m--) {
		cin >> n, f=1;
		vector<int> d(n);
		for(auto& x : d) {
			cin >> a >> b;
			if(!f) continue;
			auto p = make_pair(a+"-"+b,1);
			auto it = lower_bound(all(v), p);
			f &= (*it==p), x=(it-v.begin());
		}
		cout << (f?"YES\n":"NO\n");
		if(f) for(auto& x : d) v[x].second=0;
	}
	return 0;
}