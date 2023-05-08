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
    int n, cnt = 1, fst, mx = 1, x;
    cin >> n >> fst;
    for(int i = 1; i < n; i++){
        cin >> x;
        if(x > fst) cnt++;
        else cnt = 1;
        if(cnt > mx) mx = cnt;
        fst = x;
    }
    cout << mx;
    return 0;
}