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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int ans1 = a[0] * a[1];
        int ans2 = a[n-1] * a[n-2];
        cout << max(ans1, ans2) << endl;
    }
}

