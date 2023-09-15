#include <bits/stdc++.h>
using namespace std;

template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
const int N = 5e5;

pqg<pair<int,int>> pq;
int mx[N];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for(auto& x : a) cin >> x;
    for(auto& x : b) cin >> x;
    for(int i=0; i<m; i++)
        mx[i] = 1, pq.emplace(1, i);
    for(int i=0; i<n; i++) {
        mx[b[i]] = max(mx[b[i]], a[i]);
        pq.emplace(a[i], b[i]);
        while(pq.top().first < mx[pq.top().second])
            pq.pop();
        cout << pq.top().first << " ";
    }
    cout << "\n";
    return 0;
}