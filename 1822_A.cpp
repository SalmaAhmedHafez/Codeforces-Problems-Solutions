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
    int q, n, t;
    cin >> q;
    while(q--){
        int mx = -1, ans = -1;
        cin >> n >> t;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            a[i] += i;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(b[i] > mx && a[i] <= t){
                ans = i + 1;
                mx = b[i];
            }
        }
        cout << ans << endl;
    }
}

