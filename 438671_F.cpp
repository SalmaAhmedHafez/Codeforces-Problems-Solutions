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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        string ans = "YES";
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        for(int i = 1; i < n; i++){
            if(a[i] - a[i-1] > 1){
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}