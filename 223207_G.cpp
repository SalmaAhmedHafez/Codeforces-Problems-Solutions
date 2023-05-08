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
    int n, sum = 0, tmp = 0, ans = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
         cin >> a[i];
         sum += a[i];
    }
    sort(a, a + n);
    for(int i = n - 1; i >= 0; i--){
        tmp += a[i];
        sum -= a[i];
        ans++;
        if(tmp > sum){
            cout << ans;
            break;
        }
    }
}