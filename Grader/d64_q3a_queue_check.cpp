#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--) {
        int front, size, cap, last, cor;
        cin >> front >> size >> cap >> last >> cor;
        int r_cap = max({size, front+1, last+1});
        if(cap == 0) { // mod 0
            cout << "WRONG ";
            if(cor) cout << r_cap;
            cout << "\n";
            continue;
        }
        int r_front = ((last - size)%cap + cap) % cap;
        int r_size = ((last - front)%cap + cap) % cap;
        int r_last = (front + size) % cap;
        if(( size > cap || cap < r_cap || size < r_size || front != r_front || last != r_last)) {
            cout << "WRONG";
            if(cor == 1)
                cout << " " << r_front;
            else if(cor == 2)
                cout << " " << r_size;
            else if(cor == 3) {
                if(r_front != front || r_size != size || r_last != last) cout << " " << (front-last+size?front-last+size:r_cap); // false mod
                else cout << " " << r_cap; // wrong cap
            }
            else if(cor == 4)
                cout << " " << r_last;
            cout << "\n";
        }
        else {
            cout << "OK\n";
        }
    }
    return 0;
}