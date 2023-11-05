#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    long long n,k;
    cin >> n >> k;
    long long node = 1, sum_node = 0, cnt = 0;
    if(k==1) cnt = n;
    else while(sum_node < n) cnt++, sum_node += node, node *= k; 
    cout << cnt-1;
    return 0;
}