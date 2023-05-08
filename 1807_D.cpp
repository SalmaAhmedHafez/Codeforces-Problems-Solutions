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

#define int ull
ull INF = (1ULL << 32);

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout << fixed << setprecision(10);
    int t, n, q;
    cin >> t;
    while(t--){
        cin >> n >> q;
        int a[n], f[n+1];
        f[0] = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            f[i+1] = f[i] + a[i];
        }
        int l, r, k;
        while(q--){
            int ans = f[n];
            cin >> l >> r >> k;
            ans -= f[r] - f[l-1];
            ans += k * (r-l+1);
            cout << (ans & 1  ? "YES" : "NO") << endl;
        }
    }
    return 0;
}