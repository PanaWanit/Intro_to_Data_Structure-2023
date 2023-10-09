#include <bits/stdc++.h>
using namespace std;

using PII=pair<int,int>;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,w;
    cin >> n >> w;
    vector<int> v(n);
    for(auto& x : v) cin >> x;

    set<PII> s;
    for(int i=0;i <w+1; i++) s.insert({v[i], i});
    auto it = next(s.begin(), w/2);

    cout << it->first << " ";
    for(int i=w+1; i<n; i++) {
        auto it_del = s.lower_bound({v[i-w-1], -1});
        auto ins=PII(v[i], i);
        s.insert(ins);
        if(*it_del <= *it && ins > *it) it++;
        if(*it_del >= *it && ins < *it) it--;
        s.erase(it_del);
        cout << it->first << " ";
    }
    cout << '\n';
    return 0;
}