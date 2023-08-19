#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it, int k) {
	int m = it - v.begin();
	int l = max(0, m - k), r = min(m + k, (int)v.size() - 1);
	while(l <= r)
		v.erase(v.begin() + r--);
	return v;
}
int main() {
	int n, j, k;
	cin >> n >> j >> k;
	vector<string> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	cout << "Result after punch" << endl;
	vector<string> result = punch(v, v.begin() + j, k);
	for(auto &x : result) {
		cout << x << endl;
	}
}