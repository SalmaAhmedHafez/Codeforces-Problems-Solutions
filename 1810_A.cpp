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
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        string ans = "NO";
        for(int i = 1; i <= n; i++){
            cin >> x;
            if(x <= i)
                ans = "YES";
        }
        cout << ans << endl;
    }
}