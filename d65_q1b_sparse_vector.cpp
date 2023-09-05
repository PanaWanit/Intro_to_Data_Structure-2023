#include <iostream>
#include <map>
#include <vector>
using namespace std;
void insert_into_sv(map<int, int> &v, int pos, int value) {
	auto it = v.lower_bound(pos);
	vector<pair<int,int>> tmp(it, v.end());
	v.erase(it, v.end());
	v.insert({pos, value});
	for(auto& [key,val] : tmp) v.insert(v.end(), {key+1, val});
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	map<int, int> v;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		insert_into_sv(v, a, b);
	}
	cout << v.size() << "\n";
	for(auto &x : v) {
		cout << x.first << ": " << x.second << "\n";
	}
}