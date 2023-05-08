
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
    int n, q, l, r, sum = 0;
    cin >> n >> q;
    int a[n], b[n+1], ans;
    b[0] = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        b[i+1] = sum;
    }

    while(q--){
        cin >> l >> r;
        ans = b[r] - b[l-1];
        cout << ans << endl;
    }
    return 0;
 }

