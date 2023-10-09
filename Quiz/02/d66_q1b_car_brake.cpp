#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,q,k;
    cin >> n >> q >> k;
    vector<pair<int,int>> v;
    v.emplace_back(0, -k);
    while(n--) {
        int a,b;
        cin >> a >> b;
        v.emplace_back(a, b);
    }
    sort(v.begin()+1, v.end());
    vector<int> tmp;
    tmp.push_back(v[0].second);
    for(int i=1; i<(int)v.size(); i++) {
        v[i].second += v[i-1].second, v[i].second = min(v[i].second, 0);
        tmp.push_back(v[i].second);
    }
    
    while(q--) {
        int a,b;
        cin >> a >> b;
        if(a==1) {
            auto now = upper_bound(v.begin(), v.end(), make_pair(b, 0))-1;
            cout << -now->second << "\n";
        }
        else {
            int now = upper_bound(tmp.begin(), tmp.end(), -b)-tmp.begin();
            cout << v[now].first << "\n";
        }

    }
    return 0;
}