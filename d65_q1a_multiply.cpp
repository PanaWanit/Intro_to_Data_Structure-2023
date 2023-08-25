#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void member_multiply(vector<int> &v, vector<pair<vector<int>::iterator, int>> &multiply) {
	vector<pair<int, int>> m;
	for(auto &[a, b] : multiply)
		m.emplace_back(a - v.begin(), b);
	sort(m.begin(), m.end());
	vector<int> ans;
	for(int i = 0, j = 0; i < (int)v.size(); i++) {
		if(j != (int)m.size() && m[j].first == i) {
			while(m[j].second--)
				ans.push_back(v[i]);
			++j;
		}
		ans.push_back(v[i]);
	}
	v = ans;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> v(n);
	vector<pair<vector<int>::iterator, int>> multiply(m);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		multiply[i].first = v.begin() + a;
		multiply[i].second = b;
	}
	member_multiply(v, multiply);
	cout << "======= result ========" << endl;
	cout << v.size() << endl;
	for(auto &x : v) {
		cout << x << " ";
	}
	cout << endl;
}