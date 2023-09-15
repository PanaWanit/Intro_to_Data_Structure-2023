#include <bits/stdc++.h>
using namespace std;

queue<int> qu[2];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> v(m);
    vector<int> ans(m);
    for(int i=0,x; i<m; i++) {
        cin >> x;
        v.emplace_back(x, i);
    }
    sort(v.begin(), v.end());
    queue<pair<int,int>> q;
    for(auto& x : v) q.push(x);
    int cnt = 0, sum = 0;
    while(n--) {
        int o;
        cin >> o;
        if(o==1) {
            int a,b;
            cin >> a >> b;
            qu[a-1].push(b);
        }
        else {
            cnt++;
            if(qu[0].empty()) sum += qu[1].front(), qu[1].pop();
            else if(qu[1].empty()) sum += qu[0].front(), qu[0].pop();
            else if(qu[0].front() <= qu[1].front()) sum += qu[0].front(), qu[0].pop();
            else sum += qu[1].front(), qu[1].pop();
            while(!q.empty() && sum >= q.front().first) ans[q.front().second] = cnt, q.pop();
        }

    }
    for(auto& x : ans) cout << (x?x:-1) << " ";
    cout << "\n";
    return 0;
}