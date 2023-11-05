#include <iostream>
#include <vector>
using namespace std;

int relation(long long S, long long a, long long b) {
    if(a==b) return 4;
    if(b > a) swap(a, b); // a > b
    int c = 0, d = 0;
    while(a != 0) {
        c += 1, a = (a-1)/S;
        if(a==b) {
            if(c==1) return 1;
            return 2;
        }
    }
    while(b!= 0) d+=1, b = (b-1)/S;
    if(c==d) return 4;
    return 3;
    
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	long long S, a, b;
	cin >> n;
	while(n--) {
		cin >> S >> a >> b;
		cout << relation(S, a, b) << " ";
	}
	cout << "\n";
}