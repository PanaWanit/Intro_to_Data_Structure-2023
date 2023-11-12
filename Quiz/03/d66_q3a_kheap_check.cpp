#include<bits/stdc++.h>
using namespace std;

bool solve() {
	int n,k;
	cin >> n >> k;
	vector<int> v(n);
	for(auto& x : v) cin >> x;
	for(int i=0; i<n; i++) {
		if(k*i+1 >= n) break;
		for(int j=1; j<=k; j++)
			if(k*i+j < n && v[k*i+j] > v[i]) return false;
	}
	return true;

}
int main( ){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int q;
	cin >> q;
	while(q--) {
		cout << (solve()? "true": "false") << "\n";
	}
	return 0;
}
