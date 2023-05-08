/*
Author : Salma Hafez

0 0 0
0   0
0   0
0 0 0

*/



#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ull unsigned long long 
#define ll long long
#define int ll
ull INF = (1ULL << 32);

void solve();
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
      solve();
    }

}

void solve() {
  int n, k;
  cin >> n >> k;
  int a[n];
  vector<vector<int>> b(n+10, vector<int> (40));
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    for(int j = 0; j < 31; j++) {
      if(a[i] & (1 << j)) {
        b[i][j] = 1;
      }
    }
  }
  int ans = 0;

  for(int i = 30; ~i; i--) {
    int tmp = 0;
    for(int j = 0; j < n; j++) {
      tmp += b[j][i];
    }
    if(n-tmp <= k) {
      ans += pow(2, i);
      k -= (n-tmp);
    }
  }
  cout << ans << endl;
}