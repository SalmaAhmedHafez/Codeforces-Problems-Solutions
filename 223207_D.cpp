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
    int n, b, d, x, ans = 0, sum = 0;
    cin >> n >> b >> d;
    while(n--){
        cin >> x;
        if(x <= b)
            sum += x;
        if(sum > d){
            ans++;
            sum = 0;
        }
    }
    cout << ans;
}