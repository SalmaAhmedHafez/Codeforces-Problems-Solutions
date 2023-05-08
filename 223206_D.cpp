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
    int n, m, ans = 0;
    cin >> n >> m;
    while(1){
        n *= 3;
        m *= 2;
        ans++;
        if(n > m)
            break;
    }
    cout << ans;
    return 0;
}