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
    int n;
    string t, ans = "";
    cin >> n >> t;
    if(n < t.length()){
        cout << -1;
        return 0;
    }
    if(t == "10"){
        ans += '1'; 
        t = '0';
        n--;
    }
    while(n--) ans += t;
    cout << ans;
}
