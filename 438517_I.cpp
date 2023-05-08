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
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s;
    cin >> n >> s;
    map<char, int> seen ;
    int ans = 0;
    int start = 0;
    for(int i = 0; i < s.length(); i++) {
      if (seen.find(s[i]) != seen.end()) {
        start = max(start, seen[s[i]] + 1);
      }
      seen[s[i]] = i;
      ans = max(ans, i - start + 1);
    }
    cout << ans;
}
