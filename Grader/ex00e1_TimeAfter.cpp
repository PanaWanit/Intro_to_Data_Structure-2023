#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int h, m, p;
  cin >> h >> m >> p;
  int all = (h * 60 + m + p) % (24 * 60);
  cout << setfill('0') << setw(2) << all / 60 << " " << setfill('0') << setw(2) << all % 60 << "\n";
  return 0;
}
