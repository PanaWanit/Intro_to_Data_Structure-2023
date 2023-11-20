#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	long long n;
	cin >> n;
	long long sz=1, now=0;
	while(n--) {
		int a,b;
		cin >> a >> b;
		if(a == 0) {
			now += b;
			while(sz < now) sz *= 2;
		}
		else {
			now -= b;
		}
	}
	cout << sz-now;
	return 0;
}
