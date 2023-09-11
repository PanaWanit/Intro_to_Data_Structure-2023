#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+10;
struct OPERATOR {
    char opr;
    pair<int,int> ui;
    // int user, item;
    int val, idx;
    OPERATOR(char opr, int user, int item, int val, int idx): opr(opr), val(val), idx(idx) {
        ui = make_pair(user, item);
    }
    bool operator < (const OPERATOR& o) const {
        if(ui != o.ui) return ui < o.ui;
        return idx < o.idx;
    }
};
vector<pair<int,int>> adj[N];
vector<int> ans[N];
int c[N];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,m,q;
    cin >> n >> m >> q;
    for(int i=1; i<=n ;i++) cin >> c[i];
    vector<OPERATOR> v;
    int idx = 0;
    while(q--) {
        char opr;
        int u,i,vv;
        cin >> opr;
        ++idx;
        if(opr == 'B') {
            cin >> u >> i >> vv;
            v.emplace_back(opr, u, i, vv, idx);
        }
        else {
            cin >> u >> i;
            v.emplace_back(opr, u, i, 0, idx);
        }
    }
    sort(v.begin(), v.end());
    v.emplace_back('K', -1, 0, 0, 0);
    for(int i=1; i<(int)v.size(); i++) {
        if(v[i].ui == v[i-1].ui) continue;
        auto now = v[i-1];
        if(now.opr == 'W') continue;
        adj[now.ui.second].emplace_back(now.val, now.ui.first);
    }
    for(int i=1; i<=n; i++)
        sort(adj[i].begin(), adj[i].end(), greater<pair<int,int>>());
    for(int i=1; i<=n; i++) {
        for(int j=0; j<min((int)adj[i].size(), c[i]); j++)
            ans[adj[i][j].second].push_back(i);
    }
    for(int i=1; i<=m; i++) {
        if(ans[i].empty()) cout << "NONE";
        else for(auto& x : ans[i]) cout << x << " ";
        cout << "\n";
    }

    return 0;
}