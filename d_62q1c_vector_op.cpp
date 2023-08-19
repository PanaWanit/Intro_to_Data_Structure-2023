#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;
	vector<int> v;
	while(q--) {
		string s;
		int x;
		cin >> s;
		if(s == "pb")
			cin >> x, v.push_back(x);
		else if(s == "sa")
			sort(v.begin(), v.end());
		else if(s == "sd")
			sort(v.begin(), v.end(), greater<int>());
		else if(s == "r")
			reverse(v.begin(), v.end());
		else
			cin >> x, v.erase(v.begin() + x);
	}
	for(auto& x : v)
		cout << x << " ";
	return 0;
}