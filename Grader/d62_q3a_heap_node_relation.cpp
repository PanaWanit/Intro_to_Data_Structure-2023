#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,q;
    cin >> n >> q;
    while(q--) {
        int a,b;
        cin >> a >> b;
        if(a < b) {
            while(a < b) b = (b-1)/2;
            if(a==b) cout << "a is an ancestor of b\n";
            else cout << "a and b are not related\n";
        }
        else if(b < a) {
            while(b < a) a = (a-1)/2;
            if(a==b) cout << "b is an ancestor of a\n";
            else cout << "a and b are not related\n";
        }
        else cout << "a and b are the same node\n";
    }
    return 0;
}