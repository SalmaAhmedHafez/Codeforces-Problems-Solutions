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
    int n, x, mn, mx, ans = 0, fst; 
    cin >> n >> fst;
    mn = fst;
    mx = fst;
    for(int i = 1; i < n; i++){
        cin >> x;
        if(x > mx){
            ans++;
            mx = x;
        }
        else if(x < mn){
            ans++;
            mn = x;
        }
    }
    cout << ans;
    return 0;
}