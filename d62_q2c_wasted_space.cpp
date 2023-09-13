#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n;cin >> n;
	for(int i = 0; i < 32; i++) 
        if((1 << i) >= n) return cout << (1 << i)-n << "\n", 0;
	return 0;
}