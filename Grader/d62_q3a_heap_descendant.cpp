#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,a;
    cin >> n >> a;
    vector<int> v{a};
    for(int i=0; ;i++) {
        bool ch=0;
        if(2*v[i]+1 < n) v.push_back(2*v[i]+1), ch=1;
        if(2*v[i]+2 < n) v.push_back(2*v[i]+2), ch=1;
        if(!ch) break;
    }
    cout << v.size() << "\n";
    for(auto& x : v) cout << x << " ";
    return 0;
}