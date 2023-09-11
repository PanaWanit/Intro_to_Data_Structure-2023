#include <bits/stdc++.h>
using namespace std;

template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    pqg<pair<int,int>> pq;
    // for(int i=0, x; i<n; i++) {
    //     cin >> x;
    //     pq.emplace(x, x);
    //     cout << 0 << "\n";
    // } 
    // fuck you n > m mfs
    for(int i=0, fin, x; i<m; i++) {
        if(i < n) {
            cin >> x;
            pq.push(x, x);
            cout << "0\n";
            continue;
        }
        tie(fin, x) = pq.top();
        pq.pop();
        cout << fin << "\n";
        pq.emplace(fin+x, x);
    }
    return 0;
}