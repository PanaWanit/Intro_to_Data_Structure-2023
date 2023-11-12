#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+10;
int a[N];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,k,v;
    cin >> n >> k >> v;
    ++n;
    for(int i=0; i<n; i++) {
        if(i!=k) cin >> a[i];
        else a[i] = v;
    }

    int l=k,r=k;
    for(int sum=0; l<n && r >= 0 && a[l] == a[r]; --l, ++r) {
        while(l-1 >= 0 && a[l-1] == a[l]) --l;
        while(r+1<n && a[r+1] == a[r]) ++r;

        int sz = r - l + 1 - sum;
        if(sz < 3) break;
        sum += sz;
    }
    for(int i=0; i<n; i++)
        if(i < l+1 || i > r-1) cout << a[i] << " ";
    return 0;
}