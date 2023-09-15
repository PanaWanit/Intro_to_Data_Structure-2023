#include <bits/stdc++.h>
using namespace std;

const int N = 105;

int a[N][N];

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, m, q;
  cin >> n >> m >> q;
  memset(a, 0xc0, sizeof a);
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      cin >> a[i][j];

  while (q--) {
    int r1, r2, c1, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    if (r1 > r2 || c1 > c2) {
      cout << "INVALID\n";
      continue;
    }
    if (r1 > n || r2 < 1 || c1 > m || c2 < 1) {
      cout << "OUTSIDE\n";
      continue;
    }

    r2 = min(n, r2);
    c2 = min(m, c2);
    int mx = -2e9;
    for (int i = r1; i <= r2; i++) {
      for (int j = c1; j <= c2; j++) {
        mx = max(mx, a[i][j]);
      }
    }
    cout << mx << "\n";
  }
  return 0;
}
