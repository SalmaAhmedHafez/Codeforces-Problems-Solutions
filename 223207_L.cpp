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
    int n, ans = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n - 1; i++){
        if(a[i] == a[i+1])
            ans++;
    }
    cout << (ans > 0 ? ans : -1);
}
