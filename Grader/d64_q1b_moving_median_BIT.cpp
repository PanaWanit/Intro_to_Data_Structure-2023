#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 1;
struct FenwickTree {  // aka. BIT
	int a[N];
	inline void upd(int i, int v) {
		for(; i < N; i += i & -i)
			a[i] += v;
	}
	inline int qry(int i) {
		int r = 0;
		for(; i; i -= i & -i)
			r += a[i];
		return r;
	}
	inline int lower_bound(int x) {
		int l = 0, r = N + 1;
		while(l < r) {
			int m = l + (r - l + 1) / 2;
			if(qry(m) >= x)
				r = m - 1;
			else
				l = m;
		}
		return l + 1;
	}
} fw;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n, w;
	cin >> n >> w;
	vector<int> v(n);
	for(auto& x : v)
		cin >> x;
	for(int i = 0; i < w; i++) {
		fw.upd(v[i], 1);  // update ranking
	}
	for(int i = w; i < n; i++) {
		fw.upd(v[i], 1);
		cout << fw.lower_bound(w / 2 + 1) << " ";
		fw.upd(v[i - w], -1);
	}
	cout << "\n";
	return 0;
}