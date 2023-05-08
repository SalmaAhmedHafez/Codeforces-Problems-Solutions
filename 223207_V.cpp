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
    int n, x, ans, flag = 0;
    cin >> n;
    while(n--){
        cin >> x;
        ans = ceil(x / 2.0);
        if(x & 1){
            ans -= flag;
            flag = !flag;
        }
        cout << ans << endl;
    }
}
