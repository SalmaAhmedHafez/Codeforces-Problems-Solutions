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
    int n, mx, mn;
    cin >> n;
    int a[n + 2];
    a[0] = -1e10;
    a[n + 1] = 1e10; 
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        mn = min(a[i] - a[i-1], a[i + 1] - a[i]);
        mx = max(a[i] - a[1], a[n] - a[i]);
        cout << mn << " " << mx << endl;
    }
}
