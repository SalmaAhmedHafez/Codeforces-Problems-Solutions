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
    int n, a, tmp = 0, ans = 0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a != tmp)
            ans++;
        tmp = a;
    }
    cout << ans;
    return 0;
}