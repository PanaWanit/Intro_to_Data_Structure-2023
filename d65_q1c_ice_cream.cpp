#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int v[N+1];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,m,start,a,b,p,x;
    cin >> n >> m >> start;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        v[a] = b;
    }
    v[0] = start;
    for(int i=1; i<=N; i++) {
        if(v[i] == 0) v[i] = start;
        else start = v[i];
        v[i] += v[i-1];
    }

    while(m--) {
        cin >> p >> x;
        if(p <= v[x]) cout << lower_bound(v, v+x+1, p)-v << " ";
        else cout << lower_bound(v+x+1, v+N, p + v[x])- v << " ";
        // For output that can be greater than N(100_000) [ doesn't exist ]
        // lower_bound(v, v+N, p + v[x])
        // if(it == v+N) {
        //     cout << N + (p - v.back() + start - 1 )/start << " "; 
        // }
        // else cout << it-v << " ";
    }
    cout << "\n";
    return 0;
}