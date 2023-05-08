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
    //cout << fixed << setprecision(10);
    string s, t;
    cin >> s >> t;
    int ans = 0;
    if(s == t)
        ans = -1;
    else
        ans = max(s.length(), t.length());
    cout << ans;
    return 0;
}
